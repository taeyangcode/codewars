// https://www.codewars.com/kata/55c04b4cc56a697bb0000048/
// PASS

#include <string>
#include <set>
#include <algorithm>

bool scramble(const std::string& s1, const std::string& s2) {
	std::set<char> used;
	for (char c : s2) {
		if (used.find(c) != used.end()) continue;
		if (std::count(s2.begin(), s2.end(), c) > std::count(s1.begin(), s1.end(), c))
			return false;
		used.insert(c);
	}
	return true;
}