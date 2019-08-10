#ifndef FICHERO_CPP
#define FICHERO_CPP
#include<iostream>
#include<ctime>
#include <vector>
using namespace std;

class Fichero
{
	private:
		int tamano;
		time_t fecha;
		string usuarioCreador;
		string nombre;
		int *origen;
		
	public:
		Fichero(int tam, string usuar, string nom, int *ori)
		{
			tamano=tam;
			fecha=time(0);
			usuarioCreador.assign(usuar);
			nombre.assign(nom);
			origen = ori;
		}
		void setTamano(int tam)
		{
			tamano=tam;
		}
		int getTamano()
		{
			return tamano;
		}
		void setFecha(time_t fech)
		{
			fecha=fech;
		}
		time_t getFecha()
		{
			return fecha;
		}
		void setUsuarioCreador(string usua)
		{
			usuarioCreador=usua;
		}
		string getUsuarioCreador()
		{
			return usuarioCreador;
		}
		void setNombre(string nom)
		{
			nombre=nom;
		}
		string getNombre()
		{
			return nombre;
		}
		void setOrigen(int *ori)
		{
			origen=ori;
		}
		int *getOrigen()
		{
			return origen;
		}
		virtual string getClase(){}
		vector<Fichero> getListaContenido(){}
	
		
};


#endif 
