//
//  main.cpp
//  Section1.4.3
//
//  Created by Matthew Linaberry on 3/14/15.
//
//

#include <iostream>

int main() {
    int sum = 0, value = 0;
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is " << sum << std::endl;
    return 0;
}