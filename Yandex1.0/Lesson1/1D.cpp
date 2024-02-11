#include <iostream>
#include <cmath>
#include <string>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    if (a != 0) {
        if (b == 0 and c != 0) {
            std::cout << c*c/a;
        }
        else if (b == 0 and c == 0) {
            std::cout << 0;
        }
        else if (b != 0 and c != 0) {
            std::cout << c * c + b / a;
        }
        else if (b != 0 and c == 0) {
            std::cout << -b / a;
        }
    }
    else {
        std::cout << "MANY SOLUTIONS";
    }
    return 0;
}