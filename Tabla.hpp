#ifndef TABLA_HPP
#define TABLA_HPP

#include "Partido.hpp"
#include "FilaTabla.hpp"

#include <vector>           //librería estándar de los vectores
using std::vector;

class Tabla {
	public:
		Tabla(vector<FilaTabla*> filas) {
			this->filas = filas;
		}
		Tabla(){
			
		}

//    Tabla(const Tabla& orig){
//
//    }
//    ~Tabla(){
//
//    }

		void operator+(Partido* partidoComparar) {
			for (int j = 0; j < this->filas.size(); j++) {
//            if(partidoComparar){
//
//            }
			}
		}

		void ordernarTabla() {

		}

		void operator<<(char* archivoSalida) {

		}

		vector<FilaTabla*>& getFilas() {
			return this->filas;
		}

		void addFila(FilaTabla* fTabla) {
			this->filas.push_back(fTabla);
		}

	private:
		vector<FilaTabla*> filas;
};


#endif /* TABLA_HPP */