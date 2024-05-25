//
// Created by PC on 16/04/2024.
//

#ifndef EIVC_KAGE_H
#define EIVC_KAGE_H

#include "Sanin.h"
#include <iostream>


class Kage : public Sanin {
public:
    Kage();
    Kage(const Kage &rhs);
    Kage(const std::string &nombre, const std::string &genero, int edad, float estatura, float peso,
         const std::string &naturalezachakra, const std::string &aldea, const std::string &clan,
         const std::string &sensei, const std::string &rangomisiones, bool examenchounin,
         int nivelhabilidad, const std::string &controlelemento, const std::string &especialidad,
         const std::string &titulo, const std::string &residencia, const std::string &monumento);

    ~Kage() ;

    std::string gettitulo() const;
    void settitulo(const std::string &titulo);
    std::string getresidencia() const;
    void setresidencia(const std::string &residencia);
    std::string getmonumento() const;
    void setmonumento(const std::string &monumento);

private:
    std::string titulo;
    std::string residencia;
    std::string monumento;
};


#endif //EIVC_KAGE_H
