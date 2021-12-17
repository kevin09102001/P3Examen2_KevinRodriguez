#include <iostream>
#include "Equipo.hpp"
#include "Partido.hpp"
#include "FilaTabla.hpp"
#include "Liga.hpp"
#include <fstream>
using std::ifstream;
using std::ofstream;
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu();
int main(int argc, char** argv) {
	int opcion=0;
	while((opcion = menu()) != 6) {
		switch(opcion) {
			case 1: {
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				
				break;
			}
			case 4:{
				
				break;
			}
			case 5:{

			}
		}
	}
	return 0;
}

int menu() {
	int opc=0;
	cout << "#######Menu######\n"
	     "1) Leer Archivo \n"
	     "2) Exportar Tabla \n"
	     "3) Imprimir Partidos \n"
	     "4)Imprimir Equipos\n"
	     "5)Imprimir Tabla de Posiciones\n"
	     "6)Salir\n"
	     "Ingrese la opcion que desee" << endl;
	cin >> opc;
	return opc;
}