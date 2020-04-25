#include <iostream>
#include <cstdint>

#include "PrimeDivTest.h"

int main() {
	PrimeDivTest<std::uintmax_t> P;

	P.Search(0xffff);
	P.Search(0xffff0);
	for (auto& o : P) {
		std::cout << o << ',';
	}

	return 0;
}