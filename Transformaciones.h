//
// Created by PC on 16/04/2024.
//

#ifndef EIVC_TRANSFORMACIONES_H
#define EIVC_TRANSFORMACIONES_H

#include <iostream>

class Transformaciones {
public:
    Transformaciones ();
    Transformaciones (const Transformaciones &rhs);
    Transformaciones (const std::string &SuperSaiyajin1, const std::string &Supersaiyajin2,  const std::string &Supersaiyajin3);
    ~Transformaciones();


    std::string getSuperSaiyajin1()const;
    void setSuperSaiyajin1(std::string SuperSaiyajin1);

    std::string getSuperSaiyajin2()const;
    void setSuperSaiyajin2(std::string SuperSaiyajin2);

    std::string getSuperSaiyajin3()const;
    void setSuperSaiyajin3(std::string SuperSaiyajin3);

private:

    std::string Supersaiyajin1;
    std::string Supersaiyajin2;
    std::string Supersaiyajin3;

};


#endif //EIVC_TRANSFORMACIONES_H
