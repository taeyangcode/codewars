// https://www.codewars.com/kata/54e6533c92449cc251001667/

#include <iostream>

#include <string>
#include <vector>
#include <set>
#include <algorithm>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
	std::set<T> s(iterable.begin(), iterable.end());
	std::vector<T> v(s.begin(), s.end());
	return v;
}

std::vector<char> uniqueInOrder(const std::string& iterable) {
	std::vector<char> s;
	for (unsigned int i = 0; i < iterable.size(); ++i) {
		char c = iterable.at(i);
		if (c != iterable.at(i + 1)) s.push_back(c);
	}
	return s;
}

int main() {
	for (char i : uniqueInOrder(std::string("AAAABBBCCDAABBB")))
		std::cout << i << '\n';
}