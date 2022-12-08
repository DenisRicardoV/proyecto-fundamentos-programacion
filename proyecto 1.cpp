// librerias 
#include <iostream>
#include <conio.h>
#include <string.h>
// definimos las variables que utilizaremos para las variables
#define USER1 "denis"
#define PASS1 "270498"
#define USER2 "ricardo"
#define PASS2 "15121015"
using namespace std;
// funcion principal, cuerpo del programa
int main()
{
// array para ordenar los espacios para ocupar
int asiento[100][100];
// declaramos las variables que utilizaremos en el transcurso del desarrollo del programa
string usuario, password,nombre;
char opcion;
int dni;
bool ingresa;
char caracter;
// bucle " do while " para iniciar la sesion
do 
{
system("cls");
cout << "\n\n\n\n\n\n\t\t\tINICIAR SESION " << endl;
cout << "\t\t\t----------------" << endl;
cout << "\n\t\t\tUsuario: ";getline(cin, usuario);
cout << "\n\t\t\tPassword: ";//getline(cin, password)
caracter=getch();
password = "";
do
{
password.push_back(caracter);
cout<<"*";
caracter=getch();
}while(caracter!= 13);
if (usuario == USER1 && password == PASS1 || usuario == USER2 && password == PASS2)
{
ingresa= true;
} else {
cout << "\n\n\t Los datos son incorrectos... " << endl;
cout << "\n\n\t Intente de nuevo por favor... " << endl;
getch();
}
}while (ingresa == false);
system("cls");
cout<< "\t\t\t...BIENVENIDO AL BUS PARRANDERO..."<<endl;
cout<<"\n\n\t\t MENU "<<endl;
cout<<"\n\n A) Pasajeros. \n\n B) Asientos. \n\n C) Tipo de bus. \n\n D) Destino. ";
cout<<"\n\n\n A) PASAJEROS ";
cout<<"\n\n Elegir una opcion ";
cout<<"\n\n 1) Registrar pasajero. \n\n 2) Buscar pasajero "<<endl;
cout<<"opcion:";cin>>opcion;
system("cls");
switch(opcion)
{
case '1':
cout<<"\n\n NOMBRE DEL PASAJERO: ";getline(cin, nombre);
cout<<"\n DNI: ";cin>>dni; 
break;
case '2': 
cout<<" "<<endl;
break;
default:
break;
}
getch ();
return 0;
}
