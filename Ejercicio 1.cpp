#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

void nuevoProducto(ofstream &datosProduct);

main(){
	int opcion;
	int eleccion;
	
	do{
	ofstream grabar;
	
	cout<<"---INVENTARIO DE PRODUCTOS---"<<endl;
	
	system("cls");
	cout<<"***MENU***"<<endl;
	cout<<"1.NUEVO PRODUCTO"<<endl;
	cout<<"2.EXISTENCIAS"<<endl;
	cin>>opcion;
	
	system("cls");
	switch(opcion){
		case 1:
			nuevoProducto(grabar);
		break;	
	}
	
	cout<<"OPRIMA 1 PARA VOLVER AL MENU: ";
	cin>>eleccion;
	}while(eleccion != 0);
}

void nuevoProducto(ofstream &datosProduct){
	int codigoArt = 100001;
	int nivel_minimo = 5;
	int nivel_actual = 0;
	string proveedor;
	double precio;
	int cantNueva;
	int eleccion1;
	
	do{
	nivel_actual = nivel_actual + cantNueva;
		
	cout<<"---AGREGAR PRODUCTOS---"<<endl;
	cout<<"CODIGO DE PRODUCTO: "<<codigoArt<<endl;
	cout<<"CANT ACTUAL: "<<nivel_actual<<endl;
	cout<<"PROVEEDOR: ";
	cin>>proveedor;
	cout<<"CANT A INGRESAR";
	cin>>cantNueva;
	cout<<"PRECIO: Q";
	cin>>precio;
		
	cout<<"OPRIMA 1 PARA INGRESAR OTRO PRODUCTO: ";
	cin>>eleccion1;
	}while(eleccion1 != 0);
}
