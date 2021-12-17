#ifndef LIGA_HPP
#define LIGA_HPP

#include "Partido.hpp"
#include "FilaTabla.hpp"
#include "Tabla.hpp"

#include <vector>           //librería estándar de los vectores
using std::vector;

class Liga{
public:
    Liga(vector<Partido*> partidos, Tabla* tablaPosiciones){
        this->partidos = partidos;
        this->tablaPosiciones = tablaPosiciones;
    }
    
//    Liga(const Liga& orig){
//        
//    }
//    ~Liga(){
//        
//    }
    void leerPartidos(char* archivoEntrada) {

        ifstream lectura;
        lectura.open(archivoEntrada);

        while (!lectura.eof()) {
            string linea;
            getline(lectura, linea);

            Partido* partidoTemp = new Partido();

            
            vector <string> tokens;
            string mid;
            stringstream check1(linea);

            while (getline(check1, string mid, ',')) {
                tokens.push_back(mid);
            }

//          for (int i = 0; i < tokens.size(); i++)
//           cout << tokens[i] << '\n';

            for (int i = 0; i < tokens.size(); i++){
                partidos.push_back(new Partido*())
            }
            
            //delete relacionTemp;
        }
        lectura.close();
    }
    
    void leerEquipos(char* archivoEntrada){
        
    }
    
    void actualizarTabla(){
        
    }
    
    void exportarTablaCSV(char* archivoSalida){
        
    }
    
private:
    vector<Partido*> partidos;
    Tabla* tablaPosiciones;
};



#endif /* LIGA_HPP */
