#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    std::vector<std::string> res;
    res = s.fizzBuzz(15);
    for (auto r: res) {
        std::cout << r << " ";
    }
    return 0;
}