#include "Timer.h"
#include <iostream>

/*
    Solution to Project Euler problem 15 in C++
    Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

// TODO FIX
long long binominal(long n, long k) 
{
    if ((n == k) || (k == 0))
        return 1;
    else
        return binominal(n - 1, k) + binominal(n - 1, k - 1);
}

int main()
{
    Timer startTimer;

    std::cout << "Problem 15: " << binominal(40, 20) << std::endl;

    return 0;
}
