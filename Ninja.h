
#ifndef EIVC_NINJA_H
#define EIVC_NINJA_H

#include <iostream>
#include "Persona.h"

class Ninja : public Persona {
public:
    Ninja();
    Ninja (const Ninja &rhs);
    Ninja(const std::string &nombre, const std::string &genero, int edad, float estatura, float peso,
          const std::string &naturalezachakra, const std::string &aldea, const std::string &clan);
    ~Ninja() ;

    std::string getnaturalezaChakra() const;
    void setnaturalezaChakra(const std::string &naturalezaChakra);
    std::string getAldea() const;
    void setAldea(const std::string &aldea);
    std::string getClan() const;
    void setClan(const std::string &clan);

private:
    std::string naturalezachakra;
    std::string aldea;
    std::string clan;
};




#endif //EIVC_NINJA_H
