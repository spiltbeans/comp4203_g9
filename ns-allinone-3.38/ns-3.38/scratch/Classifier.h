#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

class Classifier {
	private:
		float prevIAT = 0;
		int computeMembership(float x, float a, float b, float c, float d) {
			if (x <= a){
				return 0;
			} else if (a < x && x < b){
				return ((x - a)/(b - a));
			} else if (b <=x && x <= c){
				return 1;
			} else if (c < x && x < d){
				return ((d - x)/(d - c));
			} else {
				return 0;
			}
		};

	public:
		// Takes as input Inter-Arrival Time and One-Way Delay
		// returns 0 if loss caused by Congestion
		// returns 1 if loss caused by Link Error
		float classify(float IAT, float OWD){
			if (prevIAT == 0){
				prevIAT = IAT;
			}

			float IAV = prevIAT/IAT;
			
			// Compute membership of each feature
			float IAV_Increasing = computeMembership(IAV, 0, 0, 0.9, 1.1);
			float IAV_Stable = computeMembership(IAV, 0.9, 1.1, 9999, 9999);
			float OWD_High = computeMembership(OWD, 0.05, 0.055, 999, 999);
			float OWD_Medium = computeMembership(OWD, 0.045, 0.047, 0.053, 0.055);
			float OWD_Low = computeMembership(OWD, 0, 0, 0.045, 0.05);

			// Compute Rule Strength
			float C_1 = std::min(IAV_Increasing, OWD_High);
			float C_2 = std::min(IAV_Increasing, OWD_Medium);
			float C_3 = std::min(IAV_Increasing, OWD_Low);
			float C_4 = std::min(IAV_Stable, OWD_High);
			float LE_1 = std::min(IAV_Stable, OWD_Medium);
			float LE_2 = std::min(IAV_Stable, OWD_Low);

			// Defuzzify
			std::vector<float> CV {C_1, C_2, C_3, C_4};
			float C = *std::max_element(CV.begin(), CV.end());
			std::vector<float> LEV {LE_1, LE_2};
			float LE = *std::max_element(LEV.begin(), LEV.end());

			if (C >= LE){
				return 0;
			} else {
				return 1;
			}
		}
};
