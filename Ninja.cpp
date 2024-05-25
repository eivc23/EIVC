#include "Ninja.h"
#include <iostream>

Ninja::Ninja() {
}

Ninja::Ninja(const std::string &nombre, const std::string &genero, int edad, float estatura, float peso,
             const std::string &chakra, const std::string &aldea, const std::string &clan)
        : Persona(nombre, genero, edad, estatura, peso), naturalezachakra(chakra), aldea(aldea), clan(clan) {

    this->naturalezachakra = naturalezachakra;
    this->aldea = aldea;
    this->clan = clan;
}

Ninja::Ninja(const Ninja &rhs) {
    this->naturalezachakra = rhs.naturalezachakra;
    this->aldea = rhs.aldea;
    this->clan = rhs.clan;
}
Ninja::~Ninja() = default;

std::string Ninja::getnaturalezaChakra() const {
    return naturalezachakra;
}

void Ninja::setnaturalezaChakra(const std::string &naturalezaChakra) {
    this->naturalezachakra = naturalezachakra;
}

std::string Ninja::getAldea() const {
    return aldea;
}

void Ninja::setAldea(const std::string &Aldea) {
    this->aldea = aldea;
}

std::string Ninja::getClan() const {
    return clan;
}

void Ninja::setClan(const std::string &Clan) {
    this->clan = clan;
}