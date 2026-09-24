#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <doctest.h>

using namespace std;


int is_even(int n){
	return !(n % 2);
}

int is_odd(int n){
	return n%2;
}

int is_pos(int n){
	return (n>=0);
}

TEST_CASE("tests all functions") {
	CHECK(is_even(8) == true);
	CHECK(is_even(79) == false);
	CHECK(is_odd(43) == true);
	CHECK(is_odd(22) == false);
	CHECK(is_pos(13) == true);
	CHECK(is_pos(-3) == false);
}
