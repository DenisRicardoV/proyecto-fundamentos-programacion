#include <iostream>
#include <conio.h>
#include <string.h>
#define USER1 "juan"
#define PASS1 "15121001"
#define USER2 "ciro"
#define PASS2 "15121041"
#define p1 "Juan Manuel Delgado Marcos"
#define p2 "Ciro Yupanqui Pumachapi"
using namespace std;
string usuario, password,n;
char opcion1,caracter;
float d;
int opc,dni,opcion,asiento,contador=0,cantidad;
int t1 = 957703283,t2 = 962240338,tel;
string nom,ap1,ap2;
int asient[100][100];
bool ingresa;
void juan(){
do{
system("cls");
cout<< " MENU \n";
cout<< " 1) Pasajeros. \n";
cout<< " 2) Asientos. \n";
cout<< " 3) Tipo de bus. \n";
cout<< " 4) Destino. \n";
cout<< " 5) salir. \n";
cout<< " Escoja una opcion : ";
cin>>opc;
system("cls");
}
while(opc==1 || opc==2 || opc==3 || opc==4); 
}
int main(){
system("color f4");
do 
{
system("cls");
cout << "\n\t\tINICIAR SESION " << endl;
cout << "\n\t\t-------------- " << endl;
cout << "\n\t\tUSUARIO: ";getline(cin, usuario);
cout << "\n\t\tPASSWORD: ";//getline(cin, password)
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
cout<<"\n\n\n\n\n\n\t\t...BIENVENIDO AL BUS PARRANDERO...\n\n"<<endl;
system("pause");
do{
system("cls");
cout<< " MENU \n";
cout<< " 1) Pasajeros. \n";
cout<< " 2) Asientos. \n";
cout<< " 3) Tipo de bus. \n";
cout<< " 4) Destino. \n";
cout<< " 5) salir. \n";
cout<< "\n Escoja una opcion : ";cin>>opc;
system("cls");
switch(opc){
case 1:
cout<<"\n\n Ingrese un numero de DNI : ";cin>>dni;
system("cls");
if(dni==77344460){
cout<<"\n Cliente frecuente, se le otorgara un 20% de descuento. ";
cout<<"\n\n NOMBRE COMPLETO : "<<p1;
cout<<"\n NUMERO DE TELEFONO : "<<t1<<endl<<endl;
system("pause");
}
else
if(dni==77344461){
cout<<"\n Cliente frecuente, se le otorgara un 20% de descuento. ";
cout<<"\n\n NOMBRE COMPLETO : "<<p2<<endl;
cout<<"\n NUMERO DE TELEFONO : "<<t2<<endl<<endl;
system("pause");
}
else{
cout<< "\n\n\n Este cliene es nuevo, es necesario pedir los datos personales "<<endl<<endl;
system("pause");
system("cls");
cout<< "\n\n\n NOMBRE : ";cin>>nom;
cout<< "\n APELLIDO PATERNO : ";cin>>ap1;
cout<< "\n APELLIDO MATERNO : ";cin>>ap2;
cout<< "\n NUMERO DE CELULAR : ";;cin>>tel;
cout<<"\n";
system("pause");
}
break;
case 2:
cout<<"Cantidad de asientos: ";cin>>cantidad; 
bool continuar=true,*asientos=new bool[cantidad]; 
for(int i=0;i<cantidad;i++)
asientos[i]=false; 
do{ system("cls"); 
cout<<"MENU.\n"; 
cout<<"1) Reservar asiento.\n"; 
cout<<"2) Cancelar asiento.\n"; 
cout<<"3) Mostrar asientos ocupados.\n"; 
cout<<"4) Mostrar asientos libres.\n"; 
cout<<"5) Salir.\n"; 
cout<<"Opcion (1..5): ";cin>>opcion; 
switch(opcion){
case 1: 
if(contador==cantidad){ 
cout<<"ASIENTOS LLENOS.\n"; 
}
else{ 
cout<<"Introduzca el asiento que desea ocupar.\n";cin>>asiento; 
asiento--;
}
if(asientos[asiento]==false){ 
asientos[asiento]=true; 
cout<<"Asiento reservado con exito.\n"; 
contador++;
}
else{
cout<<"Lo siento ya esta reservado.\n";} 
break; 
case 2: 
cout<<"Introduzca el asiento a cancelar.\n";cin>>asiento; 
asiento--; 
if(asientos[asiento]==true)
{ 
asientos[asiento]=false; 
cout<<"Asiento cancelado con exito.\n"; 
contador--;
}else{
cout<<"El asiento ya esta libre.\n"; 
}
break; 
case 3: 
if(contador==cantidad) 
{
cout<<"TODOS LOS ASIENTOS LLENOS.\n"; 
}else{
if (contador==0)
{
cout<<"TODOS LOS ASIENTOS LIBRES.\n"; 
}else{ 
cout<<"ASIENTOS OCUPADOS.\n";
}
}
for(int i=0;i<cantidad;i++) 
if(asientos[i]==true) 
{
cout<<"Asiento: "<<i+1<<endl;
} 
break; 
case 4: 
if(contador==cantidad)
{
cout<<"TODOS LOS ASIENTOS LLENOS.\n"; 
}else{ 
if (contador==0) 
{
cout<<"TODOS LOS ASIENTOS LIBRES.\n"; 
}else{ 
cout<<"ASIENTOS LIBRES.\n";
}
}
for(int i=0;i<cantidad;i++) 
if(asientos[i]==false) 
{
cout<<"Asiento: "<<i+1<<endl;
} 
break; 
case 5: 
continuar=false; 
break;
} 
getch();
}while(continuar==true); 
delete[]asientos; 
system("cls"); 
}
}
while(opc==1 || opc==2 || opc==3 || opc==4);

}
