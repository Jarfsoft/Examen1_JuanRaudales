#include "Fichero.cpp"
#include <vector>

#ifndef CARPETA_CPP
#define CARPETA_CPP

using namespace std;


class Carpeta : public Fichero
{
	private:
		vector<Fichero*> listaContenido;
	public:
		Carpeta(int tam, string usuar, string nom, int* ori) : Fichero(tam, usuar, nom, ori)
		{
			
		}
		void agregarElemento(Fichero *elem)
		{
			listaContenido.push_back(elem);
		}
		void listarContenido()
		{
			for(int x=0;x<listaContenido.size();x++)
			{
				cout<<x+1<<". "<<listaContenido.at(x)->getNombre()<<endl;
			}
		}
		vector<Fichero*> getListaContenido()
		{
			return listaContenido;
		}
		string getClase()
		{
			return "carpeta";
		}
		void imprimirTodo(Fichero ra)
		{
			cout<<ra.getNombre()<<endl;
			if(ra.getClase()=="carpeta")
				for(int x=0;x<ra.getListaContenido().size();x++)
				{
					cout<<"\t";
					imprimirTodo(ra.getListaContenido().at(x));
				}
			cout<<endl;
		}
};

#endif
