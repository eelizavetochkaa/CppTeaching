#include "template.hpp"
#include <iostream>

using namespace std;

int main(){
    std::cout << "fibonacci<10>() = " << fibonacci<10>() << "\n";
    return 0;
}