build_example(
  NAME fragmentation-ipv6
  SOURCE_FILES fragmentation-ipv6.cc
  LIBRARIES_TO_LINK
    ${libapplications}
    ${libcsma}
    ${libinternet}
)

build_example(
  NAME fragmentation-ipv6-two-MTU
  SOURCE_FILES fragmentation-ipv6-two-MTU.cc
  LIBRARIES_TO_LINK
    ${libapplications}
    ${libcsma}
    ${libinternet}
)

build_example(
  NAME icmpv6-redirect
  SOURCE_FILES icmpv6-redirect.cc
  LIBRARIES_TO_LINK
    ${libcsma}
    ${libinternet}
    ${libinternet-apps}
)

build_example(
  NAME loose-routing-ipv6
  SOURCE_FILES loose-routing-ipv6.cc
  LIBRARIES_TO_LINK
    ${libcsma}
    ${libinternet}
    ${libinternet-apps}
)

build_example(
  NAME ping6-example
  SOURCE_FILES ping6-example.cc
  LIBRARIES_TO_LINK
    ${libcsma}
    ${libinternet}
    ${libinternet-apps}
)

build_example(
  NAME radvd-one-prefix
  SOURCE_FILES radvd-one-prefix.cc
  LIBRARIES_TO_LINK
    ${libcsma}
    ${libinternet}
    ${libinternet-apps}
)

build_example(
  NAME radvd-two-prefix
  SOURCE_FILES radvd-two-prefix.cc
  LIBRARIES_TO_LINK
    ${libcsma}
    ${libinternet}
    ${libinternet-apps}
)

build_example(
  NAME test-ipv6
  SOURCE_FILES test-ipv6.cc
  LIBRARIES_TO_LINK ${libpoint-to-point}
                    ${libinternet}
)

build_example(
  NAME wsn-ping6
  SOURCE_FILES wsn-ping6.cc
  LIBRARIES_TO_LINK
    ${liblr-wpan}
    ${libinternet}
    ${libinternet-apps}
    ${libsixlowpan}
    ${libmobility}
)

build_example(
  NAME fragmentation-ipv6-PMTU
  SOURCE_FILES fragmentation-ipv6-PMTU.cc
  LIBRARIES_TO_LINK
    ${libapplications}
    ${libcsma}
    ${libinternet}
    ${libpoint-to-point}
)
