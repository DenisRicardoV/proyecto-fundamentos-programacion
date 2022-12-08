// librerias
#include<iostream>
#include <conio.h>
#include <string.h>
// definimos las variables que utilizaremos para las variables
#define USER1 "denis"
#define PASS1 "universidad"
#define USER2 "ricardo"
#define PASS2 "15121015"
#define p1 "denis_ricardo_vilcas_villalba"
#define p2 "ricardo_vilcas_quispe"
using namespace std;
// funcion principal, cuerpo del programa
int main()
{
// array para ordenar los espacios para ocupar
int asient[100][100];
// declaramos las variables que utilizaremos en el transcurso del desarrollo del programa
string usuario, password,n;
char opcion1;
int dni;
float d;
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
cout<<"\n\n 1) Pasajero nuevo. \n\n 2)Pasajero frecuente ";
cin>>opcion1;
system("cls");
switch(opcion1) //aca decia opcion Emoticono pacman 
{
case '1':
cout<<"\n\n NOMBRE : " ;cin>>n;
cout<<"\n\n DNI: ";cin>>dni;
break;
case '2':
d=0.20;
cout<<"\n\n...Flicitaciones tiene un 20% de descuento por ser un cliene frecuente ";
cout<<"\n\n\n DNI: ";cin>>dni;
if(dni==77344460){
cout<<"\n\n NOMBRE : "<<p1;
}
else
if(dni==77344461){
cout<<"\n\n NOMBRE : "<<p2;
}
else{
cout<<"\n\n El dni ingresado no pertenece a ningun cliente antiguo : ";
}
break;
default:
break;
system("pause");
}
int tope,opcion,asiento,contador=0;
cout<<"\n\n B) ASIENTOS ";
printf("\n\nCantidad de asientos: ");
scanf("%d",&tope);
bool continuar=true,*asientos=new bool[tope];
for(int i=0;i<tope;i++)asientos[i]=false;
do{
system("cls");
printf("MENU.\n");
printf("\n\n1 - Reservar asiento.\n");
printf("\n\n2 - Cancelar asiento.\n");
printf("\n\n3 - Mostrar asientos ocupados.\n");
printf("\n\n4 - Mostrar asientos libres.\n");
printf("\n\n5 - Salir.\n");
printf("Opcion (1..3): ");
scanf("%d",&opcion);
switch(opcion){
case 1: if(contador==tope)
printf("ASIENTOS LLENOS.\n");
else{
printf("Introduzca el asiento que desea ocupar.\n");
scanf("%d",&asiento);
asiento--;
if(asientos[asiento]==false){
asientos[asiento]=true;
printf("Asiento reservado con exito.\n");
contador++;}
else printf("Lo siento ya esta reservado.\n");}
break;
case 2: printf("Introduzca el asiento a cancelar.\n");
scanf("%d",&asiento);
asiento--;
if(asientos[asiento]==true){
asientos[asiento]=false;
printf("Asiento cancelado con exito.\n");
contador--;}
else printf("El asiento ya estaba libre.\n");
break;
case 3: if(contador==tope)
printf("TODOS LOS ASIENTOS LLENOS.\n");
else if (contador==0)
printf("TODOS LOS ASIENTOS LIBRES.\n");
else {
printf("ASIENTOS OCUPADOS.\n");
for(int i=0;i<tope;i++)
if(asientos[i]==true)
printf("Asiento: %d\n",i+1);}
break;
case 4: if(contador==tope)
printf("TODOS LOS ASIENTOS LLENOS.\n");
else if (contador==0)
printf("TODOS LOS ASIENTOS LIBRES.\n");
else{
printf("ASIENTOS LIBRES.\n");
for(int i=0;i<tope;i++)
if(asientos[i]==false)
printf("Asiento: %d\n",i+1);}
break;
case 5: continuar=false;
break;}
system("pause");}
while(continuar==true);
delete[]asientos;
getch ();
return 0;
}
