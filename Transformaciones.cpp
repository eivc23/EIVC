#include "Transformaciones.h"
#include <iostream>

Transformaciones::Transformaciones() {
    Supersaiyajin1 = Supersaiyajin1;
    Supersaiyajin2 = Supersaiyajin2;
    Supersaiyajin3 = Supersaiyajin3;

}
Transformaciones::Transformaciones(const Transformaciones &rhs) {
    this->Supersaiyajin1 = rhs.Supersaiyajin1;
    this->Supersaiyajin2 = rhs.Supersaiyajin2;
    this->Supersaiyajin3 = rhs.Supersaiyajin3;
}

Transformaciones::Transformaciones(const std::string &SuperSaiyajin1, const std::string &SuperSaiyajin2, const std::string &SuperSaiyajin3 ) {
    this->Supersaiyajin1 = Supersaiyajin1;
    this->Supersaiyajin2 = Supersaiyajin2;
    this->Supersaiyajin3 = Supersaiyajin3;
}
Transformaciones::~Transformaciones () {}


std::string Transformaciones::getSuperSaiyajin1() const {
    return Supersaiyajin1;
}

void Transformaciones::setSuperSaiyajin1(std::string SuperSaiyajin1) {
    this->Supersaiyajin1 = Supersaiyajin1;
}

std::string Transformaciones::getSuperSaiyajin2() const {
    return Supersaiyajin2;
}

void Transformaciones::setSuperSaiyajin2(std::string SuperSaiyajin2) {
    this->Supersaiyajin2 = Supersaiyajin2;
}

std::string Transformaciones::getSuperSaiyajin3() const {
    return Supersaiyajin2;
}

void Transformaciones::setSuperSaiyajin3(std::string SuperSaiyajin3) {
    this->Supersaiyajin3 = Supersaiyajin3;
}
