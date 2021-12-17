#ifndef PARTIDO_HPP
#define PARTIDO_HPP

#include "Equipo.hpp"

#include <string>           //librería estándar de las cadenas          
using std::string;
using std::to_string;

class Partido{
public:
    Partido(Equipo* equipo1,Equipo* equipo2,int goles1,int goles2){
        this->equipo1 = equipo1;
        this->equipo2 = equipo2;
        this->goles1 = goles1;
        this->goles2 = goles2;
    }
    
//    Partido(const Partido& orig){
//        
//    }
//    ~Partido(){
//        
//    }
    Equipo* getEquipo1(){
        return this->equipo1;
    }
    
    Equipo* getEquipo2(){
        return this->equipo2;
    }
    
    int getGoles1(){
        return this->goles1;
    }
    
    
    int getGoles2(){
        return this->goles2;
    }
    
private:
    Equipo* equipo1;
    Equipo* equipo2;
    int goles1;
    int goles2;
};

#endif /* PARTIDO_HPP */