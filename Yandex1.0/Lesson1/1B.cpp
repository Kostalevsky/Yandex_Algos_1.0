#include <iostream>
#include <string>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    if (a + b > c && a + c > b && c + b > a) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    return 0;
}