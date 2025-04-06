#include "sort.h"

void print_vectorvl(std::vector<std::vector<long>> vv) {
	for (auto i : vv) {
		for (auto j : i) {
			std::cout << j << '\t';
		}

		std::cout << std::endl;
	}
	std::cout << std::endl;
}

template<long>
void sort_vectorvt(std::vector<std::vector<long>>& vv) {
	// sort by first element

	size_t i = 0, len = vv.size() - 1;
	while (i < len) {
		if (vv.at(i).at(0) > vv.at(i + 1).at(0)) {
			std::vector<long> vecl = vv.at(i + 1);
			vv.at(i + 1) = vv.at(i);
			vv.at(i) = vecl;
			i = 0;
		}
		else {
			i += 1;
		}
	}

	// sort by n elem

	size_t vlen = vv.at(0).size() - 1;
	for (size_t by_elem = 0; by_elem < vlen; ++by_elem) {
		i = 0;
		while (i < len) {
			if ((vv.at(i).at(by_elem) == vv.at(i + 1).at(by_elem)) &&
				(vv.at(i).at(by_elem + 1) > vv.at(i + 1).at(by_elem + 1))) {

				std::vector<long> vecl = vv.at(i + 1);
				vv.at(i + 1) = vv.at(i);
				vv.at(i) = vecl;
				i = 0;
			}
			else {
				i += 1;
			}
		}
	}
}

template<int>
void sort_vectorvt(std::vector<std::vector<int>>& vvt) {
	// sort by first element

	size_t i = 0, len = vv.size() - 1;
	while (i < len) {
		if (vv.at(i).at(0) > vv.at(i + 1).at(0)) {
			std::vector<int> vecl = vv.at(i + 1);
			vv.at(i + 1) = vv.at(i);
			vv.at(i) = vecl;
			i = 0;
		}
		else {
			i += 1;
		}
	}

	// sort by n elem

	size_t vlen = vv.at(0).size() - 1;
	for (size_t by_elem = 0; by_elem < vlen; ++by_elem) {
		i = 0;
		while (i < len) {
			if ((vv.at(i).at(by_elem) == vv.at(i + 1).at(by_elem)) &&
				(vv.at(i).at(by_elem + 1) > vv.at(i + 1).at(by_elem + 1))) {

				std::vector<int> vecl = vv.at(i + 1);
				vv.at(i + 1) = vv.at(i);
				vv.at(i) = vecl;
				i = 0;
			}
			else {
				i += 1;
			}
		}
	}
}