#ifndef TABLA_HPP
#define TABLA_HPP

#include "Partido.hpp"
#include "FilaTabla.hpp"

#include <vector>           //librería estándar de los vectores
using std::vector;

class Tabla{
public:
    Tabla(){
    }
    
    Tabla(vector<FilaTabla*> filas){
        this->filas = filas;
    }
    
//    Tabla(const Tabla& orig){
//        
//    }
//    ~Tabla(){
//        
//    }
   void operator+(Partido* partidoComparar) {
        int band=0;
        for(int i=0; i<filas.size(); i++){
            FilaTabla* ftTemp = filas[i];
            cout << "equipo 1 es " << partidoComparar->getEquipo1()->getNombre();
            cout << "  equipo 2 es " << partidoComparar->getEquipo2()->getNombre();
            cout << "  fila es " << filas[i]->getEquipo()->getNombre();
            cout << "---" << endl;
            //if(ftTemp->getEquipo()->getNombre()==partidoComparar->getEquipo1()->getNombre()){
            if(ftTemp->getEquipo()->getNombre().compare(partidoComparar->getEquipo1()->getNombre())==0){
                cout << "EQUIPO11";
                if(partidoComparar->getGoles1()>partidoComparar->getGoles2())
                    filas[i]->aumentarPartidosG();
                else if(partidoComparar->getGoles1()==partidoComparar->getGoles2())
                    filas[i]->aumentarPartidosE();
                else
                    filas[i]->aumentarPartidosP();
                
                filas[i]->aumentarGolesA(partidoComparar->getGoles1());
                filas[i]->aumentarGolesR(partidoComparar->getGoles2());
                filas[i]->aumentarPartidosJ();
            }
            
            //if(ftTemp->getEquipo()->getNombre()==partidoComparar->getEquipo2()->getNombre()){
            if(ftTemp->getEquipo()->getNombre().compare(partidoComparar->getEquipo2()->getNombre())==0){
                cout << "EQUIPO2";
                cout << ""<<endl;
                if(partidoComparar->getGoles2()>partidoComparar->getGoles1())
                    filas[i]->aumentarPartidosG();
                else if(partidoComparar->getGoles1()==partidoComparar->getGoles2())
                    filas[i]->aumentarPartidosE();
                else
                    filas[i]->aumentarPartidosP();
                
                filas[i]->aumentarGolesA(partidoComparar->getGoles2());
                filas[i]->aumentarGolesR(partidoComparar->getGoles1());
                filas[i]->aumentarPartidosJ();
            }
            band++;
        }
    }

        
//        cout << "tamaño de " << band << endl;
//        cout << "tamaño de filas " << filas.size() << endl;
        
    
        
//        cout << "tamaño de " << band << endl;
//        cout << "tamaño de filas " << filas.size() << endl;
        
    
    
    void ordernarTabla(){
        
    }
    
    void operator<<(char* archivoSalida){
        
    }
    
    vector<FilaTabla*> getFilas(){
        return this->filas;
    }
    
    void addFila(FilaTabla* fTabla){
        this->filas.push_back(fTabla);
    }
    
    
private:
    vector<FilaTabla*> filas;
};


#endif /* TABLA_HPP */