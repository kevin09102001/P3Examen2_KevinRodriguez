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
vector<Partido*> partidos;
Tabla* tablaPosiciones;
Liga* ligaHN = new Liga(partidos, tablaPosiciones);

int main(int argc, char** argv) {
	int opcion=0;
	while((opcion = menu()) != 6) {
		switch(opcion) {
			case 1: {
				cout<<"EQUIPOS: "<<endl;
				ligaHN->leerEquipos("equipos.txt");
				cout<<endl;
				cout<<"PARTIDOS: "<<endl;
				ligaHN->leerPartidos("partidos.txt");
				break;
			}
			case 2: {
				ligaHN->actualizarTabla();
				ligaHN->exportarTablaCSV("tabla.cvs");
				break;
			}
			case 3: {
				cout<<"PARTIDOS: "<<endl;
				ligaHN->leerPartidos("partidos.txt");

				break;
			}
			case 4: {
				cout<<"EQUIPOS: "<<endl;
				ligaHN->leerEquipos("equipos.txt");

				break;
			}
			case 5: {
cout<<endl;
			}
		}
	}
	return 0;
}

int menu() {
	int opc=0;
	cout << "#######Menu######\n"
	     "1) Leer Archivo \n"
	     "2) Exportar Tabla (Para exportar tabla primero tiene que usar opcion 1 leer el archivo) \n"
	     "3) Imprimir Partidos \n"
	     "4) Imprimir Equipos\n"
	     "5) Imprimir Tabla de Posiciones\n"
	     "6) Salir\n"
	     "Ingrese la opcion que desee" << endl;
	cin >> opc;
	return opc;
}