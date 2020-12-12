#include "make_random_vector.hpp"
#include <iostream>

int main()
{
    // int x;
    // std::cin >> x;
    // std::vector< int > v;
    // v = make_random_vector(10, 0, 10);
    // std::sort(v.begin(), v.end(), [&](int a, int b) { return a > b; });
    // for (int i = 0; i < 10; i++) {
    //     std::cout << v[i] << "\n";
    // }
    // std::cout << "\n" << std::count_if(v.begin(), v.end(), [&](int a) { return a > x; });

    std::string x;
    std::cin >> x;
    auto is = std::adjacent_find(x.begin(), x.end());
    if (is == x.end()) {
        std::cout << "0";
    }
    else {
        std::cout << "1";
    }
}
