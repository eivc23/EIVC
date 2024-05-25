
#include "Goku.h"

Goku::Goku() {}

Goku::Goku(const Goku &rhs) {}

Goku::Goku(const std::string &nombre, const std::string &genero, int edad, float estatura, float peso,
           const std::string &Kamehameha, const std::string &Kaioken, const std::string &Genkidama,
           const std::string &SuperSaiyajin1, const std::string &Supersaiyajin2,  const std::string &Supersaiyajin3)
        : Persona(nombre, genero, edad, estatura, peso), Tecnicas(Kamehameha, Kaioken, Genkidama),
          Transformaciones (SuperSaiyajin1, Supersaiyajin2, Supersaiyajin3){}

Goku::~Goku() = default;

