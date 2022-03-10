// https://www.codewars.com/kata/530e15517bc88ac656000716/
// PASS

#include <string>

std::string rot13(std::string msg) {
	std::string res = "";
	for (char c : msg) {
		if (c >= 97 && c <= 122)
			res += (c + 13 > 122) ? 96 + (c + 13 - 122) : c + 13;
		else if (c >= 65 && c <= 90)
			res += (c + 13 > 90) ? 64 + (c + 13 - 90) : c + 13;
		else res += c;
	}
	return res;
}