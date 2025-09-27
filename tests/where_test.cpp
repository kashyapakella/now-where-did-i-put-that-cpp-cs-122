#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/where.hpp"

#include <string>

using namespace std;

TEST_CASE("it returns Hello World")
{
    REQUIRE(findString("", "") == -500);
    REQUIRE(findString("", 'a') == -500);
    REQUIRE(findString("e", 'e') == 0);
    REQUIRE(findString("la", 'a') == 1);
    REQUIRE(findString("e", 'e') == 0);
    REQUIRE(findString("e", "e") == 0);
    REQUIRE(findString("california", "alaska") == -1);
    REQUIRE(findString("california", "for") == 4);
    REQUIRE(findString("hello world", 'w') == 6);
    REQUIRE(findString("hello world", 'o') == 4);
    REQUIRE(findString("hello world", "world") == 6);
    REQUIRE(findString("abcabcabc", "bca") == 1);
    REQUIRE(findString("start", "sta") == 0);
    REQUIRE(findString("finish", "ish") == 3);
    REQUIRE(findString("alaska", 'a') == 0);
    REQUIRE(findString("alaska", "a") == 0);
}
