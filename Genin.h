
#ifndef EIVC_GENIN_H
#define EIVC_GENIN_H
#include "Ninja.h"
#include <iostream>

class Genin : public Ninja {
public:
    Genin();
    Genin (const Genin &rhs);
    Genin(const std::string &nombre, const std::string &genero, int edad, float estatura, float peso,
          const std::string &naturalezachakra, const std::string &aldea, const std::string &clan,
          const std::string &sensei, const std::string &rangomisiones, bool examenchounin);
    ~Genin();

    std::string getsensei() const;
    void setsensei(const std::string &sensei);
    std::string getrangomisones() const;
    void setrangomisones(const std::string &rangomisones);
    bool getexamenchounin() const;
    void setexamenchounin(bool examenchounin);

private:
    std::string sensei;
    std::string rangomisiones;
    bool Examenchounin;
};


#endif //EIVC_GENIN_H
