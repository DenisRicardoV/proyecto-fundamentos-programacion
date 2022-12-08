#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int num,num2,r;	cin>>num;
	cin>>num2;
	r=num%num2;
	while(r != 0)
	{
		num = num2;
		num2 =r;
		r=num%num2;	
	}
	cout<<num2<<endl;
	getch();
	return 0; 
}
