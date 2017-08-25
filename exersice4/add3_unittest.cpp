#include "add3.h"
#include "doctest.h"

TEST_CASE("Add 1 + 2 + 3") {
    REQUIRE(add3(1.0, 2.0, 3.0) == 6.0);
}
