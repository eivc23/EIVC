//
// Created by PC on 16/04/2024.
//

#ifndef EIVC_TECNICAS_H
#define EIVC_TECNICAS_H
#include <iostream>


class Tecnicas {
public:


    Tecnicas();
    Tecnicas(const Tecnicas &rhs);
    Tecnicas(const std::string &Kamehameha, const std::string &Kaioken, const std::string &Genkidama);
    ~Tecnicas();


    std::string getKamehameha()const;
    void setKamehameha(std::string Kamehameha);


    std::string getKaioken()const;
    void setKaioken(std::string Kaioken);


    std::string getGenkidama()const;
    void setGenkidama(std::string Genkidama);


private:
    std::string kamehameha;
    std::string genkidama;
    std::string kaioken;

};


#endif //EIVC_TECNICAS_H
