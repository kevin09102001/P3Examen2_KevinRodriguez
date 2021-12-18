#ifndef FILATABLA_HPP
#define FILATABLA_HPP

#include "Equipo.hpp"

class FilaTabla {
	public:
		FilaTabla() {
		}

		FilaTabla(Equipo* equipo, int cantPartidosJugados, int golesAnotados, int golesRecibidos, int partidosGanados,
		          int partidosEmpatados, int partidosPerdidos) {
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
		Equipo* getEquipo() {
			return this->equipo;
		}

		string toString() {
			return this->equipo->getNombre()+","+to_string(this->cantPartidosJugados)+","+to_string(this->golesAnotados)+","+to_string(this->golesRecibidos)+","
			       +to_string(this->partidosGanados)+","+to_string(this->partidosEmpatados)+","+to_string(this->partidosPerdidos)+"\n";
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