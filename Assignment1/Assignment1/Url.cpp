#include <iostream>

#include "Url.h"

URL::URL(const std::string& prot, const std::string& res) {
	protocol = prot;
	resource = res;
}

void URL::print() const {
	std::cout << protocol << "://" << resource << "\n";
}