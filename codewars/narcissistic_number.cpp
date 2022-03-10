// https://www.codewars.com/kata/5287e858c6b5a9678200083c/cpp
// PASS

#include <cmath>

bool narcissistic(int value) {
	int num = value, sum = 0, amt = log10(value) + 1;
	for (int i = 0; i < amt; i++) {
		sum += pow(num % 10, amt);
		if (sum > value) return false;
		num /= 10;
	}
	return sum == value;
}