#include <iostream>

int main() {
    for (int i = 32; i <= 226; ++i) {
        std::cout << "ASCII " << i << ": " << char(i) << std::endl;
    }
    std::cout << "Presiona Enter para salir...";
    std::cin.get();
    return 0;
}
