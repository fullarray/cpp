// To run using the visual studio command line tools.
// For example: cl /EHsc isSortedImplementation.cpp

#include <iostream>
#include <algorithm>
#include <iterator>

int main(){
	
	int digits[] = {3,4,5,2,5,1};
	
	for(auto i : digits) std::cout << i << ' ';
	std::cout << ": is_sorted: " << std::boolalpha
			  << std::is_sorted(std::begin(digits), std::end(digits)) << '\n';
	
	std::sort(std::begin(digits), std::end(digits));
	
	for(auto i : digits) std::cout << i << ' ';
	std::cout << ": is_sorted: "
	          << std::is_sorted(std::begin(digits), std::end(digits)) << '\n';
}