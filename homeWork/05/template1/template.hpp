#pragma once 
#include <cmath>
#define EPS 1e-10

template<int N>
constexpr auto fibonacci() -> int {
    if constexpr (N == 0 || N == 1) {
        return N;
    } else {
        return fibonacci<N-1>() + fibonacci<N-2>();
    }
}

template<int N>
class Fibonacci {
public:
    static constexpr int value = Fibonacci<N-1>::value + Fibonacci<N-2>::value;
};

template<>
class Fibonacci<0> {
public:
    static constexpr int value = 0;
};

template<>
class Fibonacci<1> {
public:
    static constexpr int value = 1;
};