#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
int num1, num2,num3,suma;
cout<< "Por favor ingrese el primer número"<<endl;
cin>> num1;
cout<< "Por favor ingrese el segundo número"<<endl;
cin>> num2;
cout<< "Por favor ingrese el tercer número"<<endl;
cin>> num3;
if (num1==(num2+num3))
	{
cout<< "El número"<< num1<< "es igual a la suma de" <<num2<<"+"<<num3;
}

if (num2==(num1+num3))
{
cout<< "El número"<< num2<< "es igual a la suma de"<<num1<<"+"<<num3;
}
if(num3==(num1+num2))
{
cout<< "El número"<< num3 <<"es igual a la suma de"<<num1<<"+"<<num2;
}
cout<<"FIN del Programa"<<endl;

getch ();
return 0;

}
