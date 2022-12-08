#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	float horas, pagoporhora,sueldo;
	cout<<" ingrese un numero: ";cin>>horas;
	cout<<"INGRESE EL PAGO POR HORA";cin>>pagoporhora;
	 sueldo= pagoporhora * horas;
	 cout<<"EL SUELDO TOTAL ES :"<<sueldo;
	getch ();
	return 0; 
}
