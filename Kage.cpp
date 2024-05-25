
#include "Kage.h"

Kage::Kage() {
    titulo = titulo;
    residencia = residencia;
    monumento = monumento;
}

Kage::Kage(const Kage &rhs) {
    this->titulo = rhs.titulo;
    this->residencia = rhs.residencia;
    this->monumento = rhs.monumento;

}
Kage::Kage(const std::string &nombre, const std::string &genero, int edad, float estatura, float peso,
           const std::string &naturalezachakra, const std::string &aldea, const std::string &clan,
           const std::string &sensei, const std::string &rangomisiones, bool examenchounin,
           int nivelhabilidad, const std::string &controlelemento, const std::string &especialidad,
           const std::string &titulo, const std::string &residencia, const std::string &monumento)

        : Sanin(nombre, genero, edad, estatura, peso, naturalezachakra, aldea, clan, sensei, rangomisiones, examenchounin,
                nivelhabilidad, controlelemento, especialidad),
          titulo(titulo), residencia(residencia), monumento(monumento) {

    this->titulo = titulo;
    this->residencia = residencia;
    this->monumento = monumento;

}

Kage::~Kage() = default;


std::string Kage::gettitulo() const {
    return titulo;
}

void Kage::settitulo(const std::string &titulo) {
    this->titulo = titulo;
}

std::string Kage::getresidencia() const {
    return residencia;
}

void Kage::setresidencia(const std::string &residencia) {
    this->residencia = residencia;
}

std::string Kage::getmonumento() const {
    return monumento;
}

void Kage::setmonumento(const std::string &monumento) {
    this->monumento = monumento;
}