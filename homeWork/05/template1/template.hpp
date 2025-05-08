#pragma once 
#include <cmath>
#define EPS 1e-10

template<int n>
auto fibonacci() -> int{
  if constexplr (n==0||n==1) {
    return n;
  } else {
    return fibonacci<n-1>() + fibonacci<n-2>();
  }

}

template<int n>
class Fibonacci{
public:
  static constexpr int value = Fibonacci<n-1>::value + Fibonacci<n-2>::value;
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
