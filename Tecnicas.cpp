
#include "Tecnicas.h"

Tecnicas::Tecnicas() {
    this->kamehameha = kamehameha;
    this->kaioken = kaioken;
    this->genkidama = genkidama;

}
Tecnicas::Tecnicas(const Tecnicas &rhs) {
    this->kamehameha = rhs.kamehameha;
    this->kaioken = rhs.kaioken;
    this->genkidama = rhs.genkidama;
}

Tecnicas::Tecnicas(const std::string &Kamehameha, const std::string &Kaioken, const std::string &Genkidama ) {
    this->kamehameha = kamehameha;
    this->kaioken = kaioken;
    this->genkidama = genkidama;

}
Tecnicas::~Tecnicas () {}

std::string Tecnicas::getKamehameha() const {
    return kamehameha;
}

void Tecnicas::setKamehameha(std::string Kamehameha) {
    this->kamehameha = Kamehameha;
}

std::string Tecnicas::getKaioken() const {
    return kaioken;
}

void Tecnicas::setKaioken(std::string Kaioken) {
    this->kaioken = Kaioken;
}

std::string Tecnicas::getGenkidama() const {
    return genkidama;
}

void Tecnicas::setGenkidama(std::string Genkidama) {
    this->genkidama = Genkidama;
}

