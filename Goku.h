#ifndef EIVC_GOKU_H
#define EIVC_GOKU_H
#include "Persona.h"
#include "Tecnicas.h"
#include "Transformaciones.h"

class Goku: public Persona, public Tecnicas, public Transformaciones {
public:

    Goku ();
    Goku (const Goku &rhs);
    Goku (const std::string &nombre, const std::string &genero, int edad, float estatura, float peso,
          const std::string &Kamehameha, const std::string &Kaioken, const std::string &Genkidama,
          const std::string &SuperSaiyajin1, const std::string &Supersaiyajin2,  const std::string &Supersaiyajin3);
    ~Goku();
};


#endif //EIVC_GOKU_H
