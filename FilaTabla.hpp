#ifndef FILATABLA_HPP
#define FILATABLA_HPP

#include "Equipo.hpp"

class FilaTabla{
public:
    FilaTabla(){
    }
    
    FilaTabla(Equipo* equipo, int cantPartidosJugados, int golesAnotados, int golesRecibidos, int partidosGanados,
    int partidosEmpatados, int partidosPerdidos){
        this->equipo = equipo;
        this->cantPartidosJugados = cantPartidosJugados;
        this-> golesAnotados = golesAnotados;
        this-> golesRecibidos = golesRecibidos;
        this-> partidosGanados = partidosGanados;
        this-> partidosEmpatados = partidosEmpatados;
        this-> partidosPerdidos = partidosPerdidos;
    }
    
//    FilaTabla(const FilaTabla& orig){
//        
//    }
//    ~FilaTabla(){
//        
//    }
    Equipo* getEquipo(){
        return this->equipo;
    }
    
private:
    Equipo* equipo;
    int cantPartidosJugados;
    int golesAnotados;
    int golesRecibidos;
    int partidosGanados;
    int partidosEmpatados;
    int partidosPerdidos;
};

#endif /* FILATABLA_HPP */