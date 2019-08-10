#include <iostream>
#include "Carpeta.cpp"
#include "Archivo.cpp"

using namespace std;

void Suma_Columnas(int**);

int main()
{
	int *r;
	Carpeta *raiz=new Carpeta(8,"Administrador","Raiz",r);
	Carpeta *actual=raiz;
	int opcion=0;
	while(opcion!=3)
	{
		cout<<"\n\n************Exmane1************\n\n1. Sistema de Archivos\n2. Metodo recursivo\n3. Salir\n\nSeleccion: ";
		cin>>opcion;
		if(opcion==1)
		{
			while(opcion!=7)
			{
				cout<<"\n\n************Sistema de Archivos************\n\n1. Entrar a subcarpeta\n2. Regresar a carpeta anterior\n3. Crear un archivo\n4. Crear carpeta\n5. Listar directorio actual\n6. Listar todo el file system\n7. Regresar al menu anterior\n\nSeleccion: ";
				cin>>opcion;
				if(opcion==1)
				{
					cout<<"\n\n";
					actual->listarContenido();
					int num;
					cout<<"\n\nIngresar el numero de su seleccion: ";
					cin>>num;
					actual=actual->getListaContenido().at(num-1);
					
					
				}
				if(opcion==2)
				{
					actual=actual->getOrigen();
				}
				if(opcion==3)
				{
					string nom, tex;
					cout<<"\n\nIngrese nombre del archivo: ";
					cin>>nom;
					cout<<"\n\nIngrese texto: ";
					cin>>tex;
					Archivo nueva=Archivo(8,"Administrador",nom,&actual,tex);
					actual.agregarElemento((fichero)nueva);
				}
				if(opcion==4)
				{
					string nom;
					cout<<"\n\nIngrese nombre de la carpeta: ";
					cin>>nom;
					Carpeta nueva=Carpeta(8,"Administrador",nom,&actual);
					actual.agregarElemento((Fichero)nueva);
				}
				if(opcion==5)
				{
					cout<<"\n\n";
					actual->listarContenido();
				}
				if(opcion==6)
				{
					cout<<"\n\n";
					actual->imprimirTodo((Fichero)raiz);
				}
				
				opcion=0;
			}
		}
		if(opcion==2)
		{
			int f,c;
			cout<<"\n\nIngresar numero de filas: ";
			cin>>f;
			cout<<"Ingresar numero de columnas: ";
			cin>>c;
			
			int **matriz;
			matriz=new int*[f];
			for(int x=0;x<f;x++)
			{
				matriz[x]=new int[c];
				for(int y=0;y<c;y++)
				{
					matriz[x][y]=5;
				}
			}
			
			cout<<"\n\n";
			
			Suma_Columnas(matriz);
			cout<<"\n\n";
		}
	}
	
	
	
			
	
	
	return 0;
}

void Suma_Columnas(int **m)
{
	int fi=sizeof(m)/sizeof(int);
	int co=sizeof(m[0])/sizeof(int);
	if(fi==1)
	{
		for(int x=0;x<co;x++)
		{
			cout<<m[0][x]<<"\t";
		}
	}else
	{
		int **ma;
		ma=new int*[fi-1];
		cout<<"yay";
		for(int x=0;x<fi-1;x++)
		{
			ma[x]=new int[co];
			for(int y=0;y<co;y++)
			{
				ma[x][y]=0;
			}
		}
		for(int x=0;x<2;x++)
		{
			for(int y=0;y<co;y++)
			{
				ma[0][y]+=m[x][y];
			}
		}
		Suma_Columnas(ma);
	}
}



