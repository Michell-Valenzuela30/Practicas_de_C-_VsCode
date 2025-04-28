#include <iostream>
#include <unistd.h>

#ifdef _WIN32
    #define CLEAR_COMMAND "cls"
#else
    #define CLEAR_COMMAND "clear"
#endif

int main() {
    std::string mensaje = "Feliz Navidad";
    int espacioInicial = 100;

    for (int i = 0; i < 100; ++i) {

        for (int j = 0; j < espacioInicial; ++j) {
            std::cout << " ";
        }

        std::cout << mensaje << std::endl;

        espacioInicial = (i < 10) ? espacioInicial - 1 : espacioInicial + 1;

        sleep(1);

        system(CLEAR_COMMAND);
    }

    return 0;
}
