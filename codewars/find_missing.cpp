// https://www.codewars.com/kata/52de553ebb55d1fca3000371/
// PASS

#include <vector>
#include <cmath>

static long findMissing(std::vector<long> list) {
    unsigned int dif = std::abs(list.at(list.size() - 1) - list.at(0)) / list.size();
    for (unsigned int i = 0; i < list.size() - 1; ++i) {
        if (std::abs(list.at(i + 1) - list.at(i)) != dif)
            return (list.at(i) + list.at(i + 1)) / 2;
    }
    return -1;
}