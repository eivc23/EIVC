

#ifndef EIVC_PERSONA_H
#define EIVC_PERSONA_H
#include <iostream>

class Persona {
public:
    Persona();
    Persona (const Persona &rhs);
    Persona (const std::string &nombre, const std::string &genero, int edad, float estatura, float peso);
    ~Persona();


    int getedad() const;
    void setedad(int edad);
    float getestatura() const;
    void setestatura(float estatura);
    float getpeso() const;
    void setpeso(float peso);
    std::string getgenero()const;
    void setgenero(std::string genero);
    std::string getnombre() const;
    void setnombre(std::string nombre);


private:
    std::string nombre;
    std::string genero;
    int edad;
    float estatura;
    float peso;


};


#endif //EIVC_PERSONA_H
