#ifndef FILATABLA_HPP
#define FILATABLA_HPP

#include "Equipo.hpp"
//#include <algorithm>
//
//#include <string>
//using std::string;

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
    
//    string toString(){
//        return getEquipo()->getNombre()+","+to_string(this->cantPartidosJugados)+","+to_string(this->golesAnotados)+","+to_string(this->golesRecibidos)+","
//                +to_string(this->partidosGanados)+","+to_string(this->partidosEmpatados)+","+to_string(this->partidosPerdidos)+"\n";
//    }
    
    string toStringh(){
        return this->getEquipo()->getNombre()+","+to_string(this->cantPartidosJugados)+","+to_string(this->golesAnotados)+","+to_string(this->golesRecibidos)+","
                +to_string(this->partidosGanados)+","+to_string(this->partidosEmpatados)+","+to_string(this->partidosPerdidos)+"\n";
    }
    
    
    
    void aumentarPartidosJ(){
        this->cantPartidosJugados++;
    }
    
    void aumentarPartidosG(){
        this->partidosGanados++;
    }
    
    void aumentarPartidosE(){
        this->partidosEmpatados++;
    }
    
    void aumentarPartidosP(){
        this->partidosPerdidos++;
    }
    
    void aumentarGolesA(int cant){
        this->golesAnotados = this->golesAnotados+cant;
    }
    
    void aumentarGolesR(int cant){
        this->golesRecibidos= this->golesRecibidos+cant;
    }
    
    int getcantPartidosJugados(){
        return cantPartidosJugados;
    }
    int getgolesAnotados(){
        return golesAnotados;
    }
    int getgolesRecibidos(){
        return golesRecibidos;
    }
    int getpartidosGanados(){
        return partidosGanados;
    }
    int getpartidosEmpatados(){
        return partidosEmpatados;
    }
    int getpartidosPerdidos(){
        return partidosPerdidos;
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