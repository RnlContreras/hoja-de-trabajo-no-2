#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <fstream>

using namespace std;

void principal(ofstream &save);

main(){
	ofstream save;
	
	principal(save);
	
	getch();
	return 0;
}

void principal(ofstream &save){
	int id;
	float nota;
	string nombre;
	float notaPromedio;
	
	save.open("Estudiantes.txt", ios::out|ios::app);
	
	cout<<"*******************"<<endl;
	cout<<"*DATOS ESTUDIANTES*"<<endl;
	cout<<"*******************"<<endl;
	
	cout<<"Ingrese el id del estudiante: ";
	cin>>id;
	cout<<"Ingrese el nombre del estudiante: ";
	cin>>nombre;
	cout<<"Ingrese nota: ";
	cin>>nota;
	
	system("cls");
	cout<<"*******************"<<endl;
	cout<<"*DATOS ESTUDIANTES*"<<endl;
	cout<<"*******************"<<endl;
	
	cout<<"Id: "<<id<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Nota: "<<nota<<endl;
	
	save<<"Id: "<<id<<"\t"<<"Nombre: "<<nombre<<"\t"<<"Nota: "<<nota<<endl;
	save.close();
}
