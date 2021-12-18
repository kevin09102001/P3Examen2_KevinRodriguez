#ifndef LIGA_HPP
#define LIGA_HPP

#include "Equipo.hpp"
#include "Partido.hpp"
#include "FilaTabla.hpp"
#include "Tabla.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <fstream>
using std::ifstream;
using std::ofstream;

#include <string>           //librería estándar de las cadenas          
using std::string;
using std::to_string;

#include <vector>           //librería estándar de los vectores
using std::vector;

#include <bits/stdc++.h>    //lib de tokenizer tipo java
using std::basic_stringstream;
using std::stringstream;

class Liga{
public:
	Liga(vector<Partido*> partidos, Tabla* tablaPosiciones){
        this->partidos = partidos;
        this->tablaPosiciones = new Tabla();
    }
    /*Liga(vector<Partido*> partidos, Tabla* tablaPosiciones){
        this->partidos = partidos;
        this->tablaPosiciones = tablaPosiciones;
    }*/
    
//    Liga(const Liga& orig){
//        
//    }
//    ~Liga(){
//        
//    }

    void leerPartidos(string archivoEntrada) {

        ifstream lectura;
        lectura.open(archivoEntrada);

        while (!lectura.eof()) {
            string linea;
            getline(lectura, linea);

            //tokenizer la linea, separar comas
            vector <string> tokens;
            string mid;
            stringstream check1(linea);

            while (getline(check1, mid, ',')) {
                tokens.push_back(mid);
            }

//            for (int i = 0; i < tokens.size(); i++)
//                cout << tokens[i] << '\n';

            //for (int i = 0; i < tokens.size(); i++){
            Equipo* eTemp1 = new Equipo(tokens[0]);
            Equipo* eTemp2 = new Equipo(tokens[1]);
            
            Partido* pTemp = new Partido(eTemp1, eTemp2, stoi(tokens[2]), stoi(tokens[3]));
            partidos.push_back(pTemp);
            
            
        }
        lectura.close();
        
        for(int i=0; i<partidos.size(); i++){
            //Partido* pTemp = partidos[i];
            cout << partidos[i]->getEquipo1()->getNombre()<< "," << partidos[i]->getEquipo2()->getNombre()<< ","<<
                    to_string(partidos[i]->getGoles1())<< "," << to_string(partidos[i]->getGoles2())<<endl;
        }
    }
    
   void leerEquipos(string archivoEntrada){
        
        ifstream lectura;
        lectura.open(archivoEntrada);
        int i=0;
        while (!lectura.eof()) {
            string linea;
            getline(lectura, linea);
            stringstream ln;
            ln<<linea;
            
            
            //cout << ln.str() << endl;
            
            
            Equipo* eTemp = new Equipo(ln.str());
            //cout<<"nombre: "<< eTemp->getNombre() << endl;
            
            FilaTabla* ftTemp = new FilaTabla(eTemp, 0, 0, 0, 0, 0, 0);
            //cout<<"nombre: "<< ftTemp->getEquipo()->getNombre() << endl;

            //this->tablaPosiciones->getFilas().push_back(ftTemp);
            if(ln.str().compare("")==0){
                //no se añade pq esta vacía
            } else{
                tablaPosiciones->addFila(ftTemp);
            }
            //this->tablaPosiciones->getFilas().push_back(new FilaTabla*(new Equipo*(ln.str()),0, 0, 0, 0, 0, 0));
            
            i++;
        }
        //cout << i;
        lectura.close();
        
        for(int i=0; i<this->tablaPosiciones->getFilas().size(); i++){
            FilaTabla* ftTemp = tablaPosiciones->getFilas()[i];
            //cout << this->tablaPosiciones->getFilas()[i]->toString();
            cout<<"nombre: "<< ftTemp->getEquipo()->getNombre() << endl;
            //cout << ftTemp->toString();
        }
    }
    
    void actualizarTabla(){
//        for (int i=0; i<partidos.size(); i++){
//            for(int j=0; j<tablaPosiciones->getFilas().size(); j++){
//                tablaPosiciones[j] + partidos[i];
//            } 
//        }
        
        for (int i=0; i<partidos.size(); i++){
            //partidos[i] + tablaPosiciones;
            Partido* pTemp = partidos[i];
            //tablaPosiciones->operator +(pTemp);
            //tablaPosiciones + ((Partido*) partidos[i]);
            *this->tablaPosiciones + pTemp;
        }
    }
    void exportarTablaCSV(char* archivoSalida) {
        ofstream escritura;
        string contenidoGuardar = "";

        for (int j = 0; j < tablaPosiciones->getFilas().size(); j++) {
     contenidoGuardar += tablaPosiciones->getFilas()[j]->toString();
            //contenidoGuardar += ((FilaTabla*)tablaPosiciones->getFilas())[j]->toString();
        }
        
        
        //se procede a guardar el string ya concatenado. lo prefiero con espacios ya que se ve más agradable  la vista
        escritura.open(archivoSalida, ofstream::out | ofstream::app);
        escritura << contenidoGuardar;
        escritura.close();
    }
    
    Tabla* getTabla(){
        return this->tablaPosiciones;
    }
    
private:
    vector<Partido*> partidos;
    Tabla* tablaPosiciones;
    
};



#endif 

