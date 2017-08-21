#include "bowling.h"
#include "doctest.h"

TEST_CASE("Worst bowling game ever") {
    unsigned char pins[20] = { 0 };
    REQUIRE(score(0) == 0);
}
