# comp4203_g9
Updated files 
  - tcp-cubic.cc
  - tcp-pacing.cc

# Installation Requirements
1. clone the project
```
git clone https://gitlab.com/nsnam/ns-3-dev.git
```
```
cd ns-3-dev
```
2. checkout to the latest ns version
```
git checkout -b ns-3.38-branch ns-3.38
```

3. install the dependencies
```
apt install g++ python3 cmake ninja-build git pip ccache gir1.2-goocanvas-2.0 python3-gi python3-gi-cairo python3-pygraphviz gir1.2-gtk-3.0 ipython3 python3-setuptools qtbase5-dev qtchooser qt5-qmake qtbase5-dev-tools qt5-default
```
```
python3 -m pip install --user cppyy
```

4. build the project in the ns-3-dev file
```
./build.py --enable-examples --enable-tests
```
