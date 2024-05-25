#include "Goku.h"
#include <iostream>

int main() {
    // Crear una instancia de Goku
    Goku goku("Goku", "Masculino", 35, 175.0f, 70.0f,
              "Kamehameha", "Kaioken", "Genkidama",
              "Super Saiyajin 1", "Super Saiyajin 2", "Super Saiyajin 3");

    // Mostrar las técnicas de Goku
    std::cout << "Tecnicas de Goku:" << std::endl;
    std::cout << "Kamehameha " << goku.getKamehameha() << std::endl;
    std::cout << "Kaioken " << goku.getKaioken() << std::endl;
    std::cout << "Genkidama " << goku.getGenkidama() << std::endl;

    // Mostrar las transformaciones de Goku
    std::cout << "\nTransformaciones de Goku:" << std::endl;
    std::cout << "Super Saiyajin 1 " << goku.getSuperSaiyajin1() << std::endl;
    std::cout << "Super Saiyajin 2 " << goku.getSuperSaiyajin2() << std::endl;
    std::cout << "Super Saiyajin 3 " << goku.getSuperSaiyajin3() << std::endl;

    return 0;
}