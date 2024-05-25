#include "Genin.h"

Genin::Genin() : sensei(""), rangomisiones(""), Examenchounin(false) {
}

Genin::Genin(const Genin &rhs) {
    this->sensei = rhs.sensei;
    this->rangomisiones = rhs.rangomisiones;
    this->Examenchounin = rhs.Examenchounin;
}

Genin::Genin(const std::string &nombre, const std::string &genero, int edad, float estatura, float peso,
             const std::string &naturalezachakra, const std::string &aldea, const std::string &clan,
             const std::string &sensei, const std::string &rangomisiones, bool examenchounin)
        : Ninja(nombre, genero, edad, estatura, peso, naturalezachakra, aldea, clan),
          sensei(sensei), rangomisiones(rangomisiones), Examenchounin(Examenchounin) {
}
Genin::~Genin() = default;


std::string Genin::getsensei() const {
    return sensei;
}

void Genin::setsensei(const std::string &sensei) {
    this->sensei = sensei;
}

std::string Genin::getrangomisones() const {
    return rangomisiones;
}

void Genin::setrangomisones(const std::string &rangomisones) {
    this->rangomisiones = rangomisones;
}

bool Genin::getexamenchounin() const {
    return Examenchounin;
}

void Genin::setexamenchounin(bool examenchounin) {
    this->Examenchounin = examenchounin;
}
