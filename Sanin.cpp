

#include "Sanin.h"

Sanin::Sanin() : nivelhabilidad(0), controlelemento(""), especialidad("") {
}

Sanin::Sanin(const Sanin &rhs) {
    this->nivelhabilidad = rhs.nivelhabilidad;
    this->controlelemento = rhs.controlelemento;
    this->especialidad = rhs.especialidad;
}

Sanin::Sanin(const std::string &nombre, const std::string &genero, int edad, float estatura, float peso,
             const std::string &naturalezachakra, const std::string &aldea, const std::string &clan,
             const std::string &sensei, const std::string &rangomisiones, bool examenchounin,
             int nivelHabilidad, const std::string &controlElemento, const std::string &especialidad)
        : Genin(nombre, genero, edad, estatura, peso, naturalezachakra, aldea, clan, sensei, rangomisiones, examenchounin),
          nivelhabilidad(nivelHabilidad), controlelemento(controlElemento), especialidad(especialidad) {
}
Sanin::~Sanin() = default;

int Sanin::getnivelhabilidad() const {
    return nivelhabilidad;
}

void Sanin::setnivelhabilidad(int nivelHabilidad) {
    this->nivelhabilidad = nivelhabilidad;
}

std::string Sanin::getcontrolelemento() const {
    return controlelemento;
}

void Sanin::setcontrolelemento(const std::string &controllemento) {
    this->controlelemento = controlelemento;
}

std::string Sanin::getespecialidad() const {
    return especialidad;
}

void Sanin::setespecialidad(const std::string &especialidad) {
    this->especialidad = especialidad;
}
