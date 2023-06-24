#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test get_vector_max_value")
{
    vector<int> vec1 = {5, 7, -1, 99, -100, 10};
    REQUIRE(get_vector_max_value(vec1) == 99);

    vector<int> vec2 = {-50, 0, -51, 50, -99, -100};
    REQUIRE(get_vector_max_value(vec2) == 50);
}

TEST_CASE("Test get_square_of_each_element")
{
    vector<int> vec1 = {3, 7, 2, 5, 10};
    vector<int> expected1 = {9, 49, 4, 25, 100};
    REQUIRE(get_square_of_each_element(vec1) == expected1);

    vector<int> vec2 = {6, 1, 8, 9, 4};
    vector<int> expected2 = {36, 1, 64, 81, 16};
    REQUIRE(get_square_of_each_element(vec2) == expected2);
}
