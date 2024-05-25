
#include "Persona.h"
#include <iostream>

Persona::Persona() {
    nombre = "";
    genero = "";
    edad = 0;
    estatura = 0.0f;
    peso = 0.0f;
}

Persona::Persona(const Persona &rhs) {
    this->nombre = rhs.nombre;
    this->genero = rhs.genero;
    this->edad = rhs.edad;
    this->estatura = rhs.estatura;
    this->peso = rhs.peso;
}
Persona::Persona(const std::string &nombre, const std::string &genero, int edad, float estatura, float peso) {
    this->nombre = nombre;
    this->genero = genero;
    this->edad = edad;
    this->estatura = estatura;
    this->peso = peso;
}
Persona::~Persona() = default;

int Persona::getedad() const {
    return edad;
}

void Persona::setedad(int edad) {
    this->edad = edad;
}

float Persona::getestatura() const {
    return estatura;
}

void Persona::setestatura(float estatura) {
    this->estatura = estatura;
}

float Persona::getpeso() const {
    return peso;
}

void Persona::setpeso(float peso) {
    this->peso = peso;
}

std::string Persona::getgenero() const {
    return genero;
}
void Persona::setgenero(std::string genero) {
    this->genero = genero;
}

std::string Persona::getnombre() const {
    return nombre;
}

void Persona::setnombre(std::string nombre) {
    this->nombre = nombre;
}