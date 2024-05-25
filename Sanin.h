//
// Created by PC on 16/04/2024.
//

#ifndef EIVC_SANIN_H
#define EIVC_SANIN_H
#include "Genin.h"
#include <iostream>

class Sanin : public Genin {
public:
    Sanin();
    Sanin(const Sanin &rhs);
    Sanin(const std::string &nombre, const std::string &genero, int edad, float estatura, float peso,
          const std::string &naturalezachakra, const std::string &aldea, const std::string &clan,
          const std::string &sensei, const std::string &rangomisiones, bool examenchounin,
          int nivelhabilidad, const std::string &controlelemento, const std::string &especialidad);

    ~Sanin();

    int getnivelhabilidad() const;
    void setnivelhabilidad(int nivelhabilidad);
    std::string getcontrolelemento() const;
    void setcontrolelemento(const std::string &controlelemento);
    std::string getespecialidad() const;
    void setespecialidad(const std::string &especialidad);

private:
    int nivelhabilidad;
    std::string controlelemento;
    std::string especialidad;
};


#endif //EIVC_SANIN_H
