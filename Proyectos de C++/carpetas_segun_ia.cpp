#include <iostream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    std::cout << "¿Deseas crear una carpeta? (s/n): ";
    char respuesta;
    std::cin >> respuesta;

    if (respuesta == 's' || respuesta == 'S') {
        // Crear las carpetas
        try {
            fs::create_directory("listo");
            fs::create_directory("recursos");
            fs::create_directory("editable");
            std::cout << "¡Carpetas creadas exitosamente!" << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error al crear las carpetas: " << e.what() << std::endl;
        }
    } else {
        std::cout << "No se crearon las carpetas." << std::endl;
    }

    return 0;
}
