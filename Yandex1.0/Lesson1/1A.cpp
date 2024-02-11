#include <iostream>
#include <string>

int main() {
    int troom = 0;
    int tcond = 0;
    std::string mode;
    std::cin >> troom >> tcond >> mode;
    if (mode == "freeze") {
        if (troom <= tcond) {
            std::cout << troom;
        } 
        else {
            std::cout << tcond;
        }
    } 
    else if (mode == "heat") {
        if (troom <= tcond) {
            std::cout << tcond;
        } 
        else {
            std::cout << troom;
        }
    } 
    else if (mode == "auto") {
        std::cout << tcond;
    }
    else {
        std::cout << troom;
    }
    return 0;
}