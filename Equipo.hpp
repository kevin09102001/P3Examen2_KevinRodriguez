#ifndef EQUIPO_HPP
#define EQUIPO_HPP

#include <string>           //librería estándar de las cadenas          
using std::string;
using std::to_string;

class Equipo{
public:
    Equipo(string nombre){
        this->nombre = nombre;
    }
    
//    Equipo(const Equipo& orig){
//        
//    }
//    ~Equipo(){
//        
//    }
    
    string getNombre(){
        return this->nombre;
    }
    
private:
    string nombre;
};

#endif /* EQUIPO_HPP */
