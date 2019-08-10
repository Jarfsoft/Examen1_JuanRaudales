#ifndef ARCHIVO_CPP
#define ARCHIVO_CPP
#include <iostream>
#include <vector>
using namespace std;
class Archivo : public Fichero
{
	private:
		string texto;
	public:
		Archivo(int tam, string usuar, string nom, int* ori, string tex) : Fichero(tam, usuar, nom, ori)
		{
			texto=tex;
		}
		string getTexto()
		{
			return texto;
		}
		string getClase()
		{
			return "archivo";
		}
		vector<Fichero> getListaContenido(){}
};

#endif
