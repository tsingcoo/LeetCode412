//
// Created by 王青龙 on 2017/2/25.
//

#include "solution.h"
#include <string>

std::vector<std::string> Solution::fizzBuzz(int n) {
    std::vector<std::string> res(n);
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            res[i - 1] = "FizzBuzz";
        } else if (i % 3 == 0) {
            res[i - 1] = "Fizz";
        } else if (i % 5 == 0) {
            res[i - 1] = "Buzz";
        } else {
            res[i - 1] = std::to_string(i);
        }
    }
    return res;
}
