#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
int num1, num2,num3,suma;
cout<< "Por favor ingrese el primer n�mero"<<endl;
cin>> num1;
cout<< "Por favor ingrese el segundo n�mero"<<endl;
cin>> num2;
cout<< "Por favor ingrese el tercer n�mero"<<endl;
cin>> num3;
if (num1==(num2+num3))
	{
cout<< "El n�mero"<< num1<< "es igual a la suma de" <<num2<<"+"<<num3;
}

if (num2==(num1+num3))
{
cout<< "El n�mero"<< num2<< "es igual a la suma de"<<num1<<"+"<<num3;
}
if(num3==(num1+num2))
{
cout<< "El n�mero"<< num3 <<"es igual a la suma de"<<num1<<"+"<<num2;
}
cout<<"FIN del Programa"<<endl;

getch ();
return 0;

}
