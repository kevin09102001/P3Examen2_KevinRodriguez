#ifndef TABLA_HPP
#define TABLA_HPP

#include "Partido.hpp"
#include "FilaTabla.hpp"

#include <vector>           //librería estándar de los vectores
using std::vector;

class Tabla{
public:
    Tabla(vector<FilaTabla*> filas){
        this->filas = filas;
    }
    
//    Tabla(const Tabla& orig){
//        
//    }
//    ~Tabla(){
//        
//    }
    void operator+(Partido*){
        
    }
    
    void ordernarTabla(){
        
    }
    
    void operator<<(char* archivoSalida){
        
    }
    
private:
    vector<FilaTabla*> filas;
};


#endif /* TABLA_HPP */