#include <iostream> 
int main() { 
int tope,opcion,asiento,contador=0; 
printf("Cantidad de asientos: "); 
scanf("%d",&tope); 
bool continuar=true,*asientos=new bool[tope]; 
for(int i=0;i<tope;i++)asientos[i]=false; 
do{ 
system("cls"); 
printf("MENU.\n"); 
printf("1 - Reservar asiento.\n"); 
printf("2 - Cancelar asiento.\n"); 
printf("3 - Mostrar asientos ocupados.\n"); 
printf("4 - Mostrar asientos libres.\n"); 
printf("5 - Salir.\n"); 
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
return 0;}
