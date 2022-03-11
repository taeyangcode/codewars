// https://www.codewars.com/kata/541c8630095125aba6000c00/
// PASS

int digitalRoot(int n) {
	if (n < 10) return n;
	int res = 0;
	for (int i = n; i > 0; i /= 10)
		res += i % 10;
	return digitalRoot(res);
}