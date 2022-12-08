#include <iostream> // biblioteca que se utiliza para utilizar las palabras reservadas "cout" y "cin"
#include <conio.h>  // biblioteca que utilizamos para poder utilizar la funcion "getch"
#include <string.h> // biblioteca que sirve para usar la variable "string" 
#include<windows.h> // nos permite utilizar el "gotoxy" funcion que utiliza coordenadas para ordenar lo que se va a mostrar
#include <cstdlib> // bibliotca que permite introducir sonidos en el programa
#define USER1 "denis" // definimos variables para el usuario
#define PASS1 "15121015" // definimos la contraseña para el primero usuario
#define USER2 "ricardo" // definimos el segundo usuario que utilizaremos 
#define PASS2 "vilcas" // definimos la contraseña para el segundo usuario
#define p1 "Denis Ricardo Vilcas Villalba" // definimos el nombre que funcionara como cliente frecuente
#define p2 "Andres Pedro Cruz Ramirez"  // definimos el nombre que funcionara como cliente frecuente
using namespace std; // espacio que nos permite utilizar las palabras reservadas "cout" y "cin"

// definimos todas las variables que utilizaremos en el desarrolo del codigo
string usuario, password,n,hora;
 char opcion1,caracter;
 float precio,d;
 int tope,opcion,asiento,opcion2,contador=0,destino;
 int opc,menu,dni,cantidad,f,m,a;
 int t1 = 946641206,t2 = 958186902,tel;
 string nom,ap1,ap2;
 int asient[100][100];
 bool ingresa;
 
 //  funcion que reproduce un sonido para cada proceso que realizamos
int beep() 
{ 
Beep(523,500); 
Beep(587,500); 
Beep(659,500); 
Beep(698,500); 
Beep(784,500); 
Beep(876,500);
Beep(982,500);
Beep(1050,500);

system("PAUSE"); 

return 0; 
} 

 // funcion para poder determinar las coordenadas para el "gotoxy"
 void gotoxy(int x,int y){
      HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y = y;
      SetConsoleCursorPosition(hcon,dwPos);
}

// esta funcion la utilizamos para mostrar los resultados al momento de imprimir el boleto
 void ciudad() {
 	if(destino==1)
 	{
 		cout<<"\t\tCIUDAD: LIMA"<<endl;
 		cout<<"\t\tPRECIO: S/. 100"<<endl;
		cout<<"\t\tHORA DE VIAJE : "<<hora<<endl;
	 }
	 	if(destino==2)
 	{
 		cout<<"\ttDESTINO: CUSCO"<<endl;
 		cout<<"\t\tPRECIO: S/. 45"<<endl;
		cout<<"\t\tHORA DE VIAJE : "<<hora<<endl;
	 }
	 	if(destino==3)
 	{
 		cout<<"\t\tCIUDAD: PUNO"<<endl;
 		cout<<"\t\tPRECIO: S/. 60"<<endl;
		cout<<"\t\tHORA DE VIAJE : "<<hora<<endl;
	 }
 }
 
 // esta funcion nos permite realizar la reserva, compra, etc de los asientos

int asientos() { 
 
bool continuar=true,*asientos=new bool[tope];  // cuando ponemos el asterico nos referimos a un puntero y un puntero nos sirve para alamcenar datos
for(int i=0;i<tope;i++)asientos[i]=false; // for que controla un arreglo para determinar el numero de asientos
do{ 
 system("cls"); // limpia la pantalla mientras el bucle se realiza
 system("color d5");// cambiamos el color de las letras y la pantalla
    gotoxy(15,1);cout<<"*****************************************"<<endl;
    gotoxy(15,2);cout<<"*";cout<<"\t1 - Comprar asiento";
	gotoxy(55,2);cout<<"*"<<endl;
    gotoxy(15,3);cout<<"*";cout<<"\t2 - Reservar asiento";
	gotoxy(55,3);cout<<"*"<<endl; 
    gotoxy(15,4);cout<<"*";cout<<"\t3 - Cancelar asiento   ";
	gotoxy(55,4);cout<<"*"<<endl;
    gotoxy(15,5);cout<<"*";cout<<"\t4 - Mostrar asientos ocupados.";
	gotoxy(55,5);cout<<"*"<<endl; 
    gotoxy(15,6);cout<<"*";cout<<"\t5 - Mostrar asientos libres";
	gotoxy(55,6);cout<<"*"<<endl;
	gotoxy(15,7);cout<<"*";cout<<"\t6 - Regresar al menu anterior";
	gotoxy(55,7);cout<<"*"<<endl; 
    gotoxy(15,8);cout<<"*****************************************"<<endl;
    gotoxy(15,9);cout<<"OPCION :";cin>>opcion;
    Beep(587,500);  // reproduce sonidos agudos o graves
    Beep(659,500); // reproduce sonidos agudos o graves
    system("cls"); // limpia la pantalla mientras el bucle se realiza
  switch(opcion) // menu de opciones para los asientos
  { 
  case 1: // casos para cada uno de los numeros 
  	
  	if(contador==tope) 
          cout<<"ASIENTOS LLENOS.\n"; 
       else
	   { 
          cout<<"Introduzca el asiento que desea ocupar.\n"; 
          cin>>asiento; 
          
          while( asiento > tope)// mientras el asiento ingresado sea mayor que el tope no se permitira una reserva o compra
		  { 
          	system("cls"); // limpia la pantalla despeus de realizar un proceso
          	cout<< " El asiento ingresado no es valido, intente de nuevo ";
          	cin>>asiento;
		  }
          asiento--; // disminuye un elemento del array 
       if(asientos[asiento]==false) // el asiento se inicaliza en 0 para decir que esta desocupado
	   { 
          asientos[asiento]=true; // cuando se ingrese el numero del asiento el numero sera contado como un proceso y se igualara a 1
          cout<<"Asiento  comprado con exito.\n"; 
          contador++;} // el asiento ya fue comprado con exito esto quiere decir que se aumentara mas un proceso
       else {
	   cout<<"Lo siento ya esta ocupado.\n"; // y si el numero ya ha sido ingresado anteriormente ya no se podra contar por que no esta inicializado en 0
	   break;}
	   } 
	   system("pause"); // pausamos la pantalla un momento
      system("cls"); // y limpiamos para mostrar lo siguiente
      system("color f8");// cambiamos el color de las letras y la pantalla
      cout<<"\n HORA : ";cin>>hora;//nos piden que ingresemos la hora de partida del bus
      cout<<"\t\tFECHA "<<endl;
	  cout<<"DIA :";cin>>f;//nos pide que ingresemos el dia 
	  cout<<"MES  : ";cin>>m;//nos pide que ingresemos el mes
	  cout<<"ANIO : ";cin>>a; // nos piden que ingresemos los diferentes datos que son la fecha y hora de viaje
  	  cout<<"\n\n Ingrese un numero de DNI : ";cin>>dni; // luego ingresamos un numero de dni
  	  Beep(587,500);  // reproduce sonidos agudos o graves
      Beep(659,500); // reproduce sonidos agudos o graves
      system("cls");//limpiamos pantalla
      if(dni==71632670) // si el dni es de un pasajero frecuente los datos seran mostrados inmediatamente
	  {
	  	cout<<"\t\tBOLETO DE USUARIO"<<endl<<endl;
        cout<<"\t\tBUS PARRANDERO"<<endl;
		cout<<"NOMBRE COMPLETO : "<<p1<<endl;
		cout<<"FECHA DE VIAJE : "<<f<<" / "<<m<<" / "<<a<<endl;
        cout<<"NUMERO DE TELEFONO : "<<t1<<endl;
		cout<<"ASIENTO: " << asiento+1<<endl;
		ciudad();
        system("pause");
      }
      else
         if(dni==72632670){ // este if se realiza el mismo proceso que el anterior pero es otro usuario predeterminado
         	cout<<"\t\tBOLETO DE PASAJERO"<<endl<<endl;
           cout<<"\t\tBUS PARRANDERO"<<endl;
           cout<<"NOMBRE COMPLETO :"<<p2<<endl; 
		   cout<<"FECHA DE VIAJE : "<<f<<" / "<<m<<" / "<<a<<endl;
           cout<<"NUMERO DE TELEFONO : "<<t2<<endl;
		   cout<<"ASIENTO: " << asiento+1<<endl;
		   ciudad();  
        system("pause"); // y damos una pausa 
       }
      else{
        cout<< "\n\n\n Este cliene es nuevo, es necesario pedir los datos personales "<<endl<<endl; // si el dni ingresado no es de un cliente frecuente te pediran los datos
        system("pause"); // volvemos a pausar la pantalla
        system("cls"); // y limpiamos todo lo de arriba para poder ingresar los datos
        cout<<"\t\tBUS PARRANDERO"<<endl; 
        cout<<"BOLETO DE USUARIO"<<endl;
        cout<< "\n NOMBRE : ";cin>>nom; // ingresamos el nombre del cliente
        cout<< "\n APELLIDO PATERNO : ";cin>>ap1; // ingresamos apellido
        cout<< "\n APELLIDO MATERNO : ";cin>>ap2; // ingresamos apellido
        cout<< "\n NUMERO DE CELULAR : ";;cin>>tel; // ingresamos numero de celular
		ciudad(); // la funcion reconoce de aceurdo al numero ingresado por caso
        system("pause"); // pequeña pausa
        system("cls"); // y limpiamos pantalla
        
        // aqui ya se muesta el boleto impreso con todo los datos ingresados
        gotoxy(24,6);cout<<"BOLETO DEL PASAJERO"<<endl;
        cout<<"|-------------------------------------------------------------------"<<endl;
        gotoxy(22,10);cout<<"BUS PARRANDERO";cout<<"                                        "<<endl;
        gotoxy(18,12);cout<<"NOMBRE : "<<nom;
		gotoxy(18,14);cout<<"FECHA DE VIAJE : "<<f<<" / "<<m<<" / "<<a;
        gotoxy(18,16);cout<<"APELLIDO PATERNO : "<<ap1;
        gotoxy(18,18);cout<<"APELLIDO MATERNO : "<<ap2;
        gotoxy(18,20);cout<<"NUMERO DE CELULAR : "<<tel;
		gotoxy(18,22);cout<<"ASIENTO: "<<asiento + 1;
		gotoxy(18,24);    ciudad();
		cout<<"|-------------------------------------------------------------------"<<endl;
        }
      break;
    	
  	
    case 2: 
	   if(contador==tope) // cuando el contador sea igual a los asientos el bus se contara como lleno
          cout<<"ASIENTOS LLENOS.\n"; 
       else{  // pero si no esta lleno entonces ingresaremos el asiento que deseamos ocupar
           cout<<"Introduzca el asiento que desea ocupar.\n"; 
           cin>>asiento; // introducimos el numero del asiento
          
          while( asiento > tope){ // y mientrasel numero de asiento sea mayor a tope entonces pedira que ingresemos de nuevo un numeor de asiento
          	system("cls"); // limpiamos la pantalla
          	cout<< " El asiento ingresado no es valido, intente de nuevo ";
          	cin>>asiento; // y volvemos a ingresar un numero de asiento
		  }
          asiento--;  // entonces cuando ingresemos el asiento este lo contara como menos uno en el arreglo y no lo mostrara
       if(asientos[asiento]==false) // si el asineto es igual a 0 significa que esta desocupado
	   { 
          asientos[asiento]=true;  // entonces al ingresar el numero de asiento estaremos ocupando y se igualara a 1
          cout<<"Asiento reservado con exito.\n"; 
          contador++;} // el asiento se contara como ocupado y se ira a la lista de los asientos ocupados
       else  //pero si ingresas un numero de asiento que ya ha sido registrado entonces ya no se podra reservar ni comprar
	   cout<<"Lo siento ya esta reservado.\n";} 
    break; 
    case 3: 
	   cout<<"Introduzca el asiento a cancelar.\n"; // introducimos el asiento que queremos cancelar 
       cin>>asiento; 
       asiento--; // entonces este asientos sera cancelado y se eliminara de la lista de los ocupados y se mostrara en el arreglo como un asiento libre
       if(asientos[asiento]==true) // enotnces el asiento sera inicializado en 1 
	   { 
        asientos[asiento]=false; // pero cuando lo escribamos se igualara a 0 y estara libre nuevamente
        cout<<"Asiento cancelado con exito.\n"; 
        contador--;}  // entonces disminuira y se borra de la lista de los ocupados
       else 
	   cout<<"El asiento ya estaba libre.\n";  // si el asiento ingresado esta inicializado en 0 entonces se mostrara el texto "el asiento ya esta libre"
    break; 
    case 4: 
	  if(contador==tope) // cuando el contador en el caso 4 sea igual al tope entonces los asientos estaran llenos
       cout<<"TODOS LOS ASIENTOS LLENOS.\n"; 
      else 
	  if (contador==0) // pero si el contador es igual a 0 significara que todos los asientos estan completamente libres
       cout<<"TODOS LOS ASIENTOS LIBRES.\n"; 
      else 
	  { 
       cout<<"ASIENTOS OCUPADOS.\n"; 
       for(int i=0;i<tope;i++) 
      if(asientos[i]==true) // entonces una sentencia for nos ayudara a mostrar cuaes son los asientos ocupados deacuerdo a los numeros que ingresemos en los anteriores procesos
       cout<<"Asiento: "<<i+1<<endl;
	  } 
    break; 
    case 5: // cuando el contador sea igual a tope los asientos estaran llenos 
	  if(contador==tope) 
       cout<<"TODOS LOS ASIENTOS LLENOS.\n"; 
      else 
	  if (contador==0) // si el contador es igual a 0 los asientos estaran vacios
       cout<<"TODOS LOS ASIENTOS LIBRES.\n"; 
      else{ 
       cout<<"ASIENTOS LIBRES.\n"; 
       for(int i=0;i<tope;i++) // este for nos mostrara los asientos libres de acuerdo a todos los procesos antes realizados
      if(asientos[i]==false) // entonces mostrara los asientos que estaban igualados a 1
       cout<<"Asiento: "<<i+1<<endl;} 
    break; 	
    case 6: continuar=false; 
    break;} 
    system("pause");} 
    while(continuar==true); 
    
    return 0;
   }
   
   // esta funcion determina el tipo de bus que se desea elgir para la reserva o compra de boletas
   int bus(){
  do{
		system("pause");
		system("cls");//limpiamos pantalla
		system ("color a4");// cambiamos el color de las letras y la pantalla
	    cout << " \n 1) Bus de 40 asientos ";
	    cout << " \n 2) Bus de 60 asientos ";
	    cout << " \n 3) Regresar al menu anterior ";
	    cout << " \n elija una opcion : ";
	    cin >> opcion2;	
	    Beep(587,500);  // reproduce sonidos agudos o graves
        Beep(659,500); // reproduce sonidos agudos o graves
	    switch(opcion2)
	   {
		
		 case 1:
		 	system("color c0");// cambiamos el color de las letras y la pantalla
		 	// limitara la cantidad de asientos a 40
			tope = 40;
			 asientos();
			 
			break;
		 case 2:
		 	system("color c0");// cambiamos el color de las letras y la pantalla
		     // limitara lla cantidad de asientos a 60
		     tope = 60;
			asientos();
   }
} while(opcion2 !=3); // este bucle funcionara mientras no se oprima el 3
}

int main(){ // empezamos con la funcion principal, el cuerpo del programa
system("color f9"); // cambiamos el color de las letras y la pantalla
 do 
 {
    system("cls");
    gotoxy(30,8);cout<<"INICIAR SESION ";
    gotoxy(30,9);cout<<"-------------- ";
    gotoxy(30,11);cout << "USUARIO: ";getline(cin, usuario); // introducimos el usuario
    gotoxy(30,13);cout << "PASSWORD: ";//getline(cin, password) // introducimos el password
    caracter=getch();
    password = "";
     do // este bucle convertira lo ingresado por teclado en asteriscos
     {
       password.push_back(caracter); // entonces lo ingresado por teclado retornara en forma de asterisco
       cout<<"*";
       caracter=getch();
     }while(caracter!= 13); // mientras no precionemos enter 
     cout<<endl;
    if (usuario == USER1 && password == PASS1 || usuario == USER2 && password == PASS2) // si el usuario es igual a una de las demandas pasara al siguiente paso
    {
    ingresa= true; // cuando sea verdado entonces el bucle termina y pasa al siguiente proceso
    } else { // si no te pedire que ingreses los datos de nuevo
    Beep(876,1000);
    Beep(982,1000);
     gotoxy(30,15);cout <<"Los datos son incorrectos... " << endl;
     gotoxy(30,16);cout <<"Intente de nuevo por favor... " << endl;
     getch();
     }
 }while (ingresa == false);// cuando lo ingresado sea falso entonces seguira funcionando el bucle
    beep();//declaramos la funcion del beep
   system("cls");
   gotoxy(20,2);cout<<"?_?...BIENVENIDO AL BUS PARRANDERO...?_?"<<endl<<endl;
   system("color e2");// cambiamos el color de las letras y la pantalla
   system("pause");
   do{
      system("cls");
      gotoxy(20,2);cout<<"EMPRESAS BUS PARRANDERO S.A.D";
      // mostramos un menu de opciones 
      gotoxy(20,5);cout<< "1) MENU\t\t2)SALIR";
      gotoxy(20,7);cout<< "Escoja una opcion : ";cin>>opc; // escogemos la opcion y ocntinuamos con el programa
      Beep(587,500);  // reproduce sonidos agudos o graves
      Beep(659,500); // reproduce sonidos agudos o graves
      system("cls");//limpiamos pantalla
      switch(opc)
      { 
         case 1:
         	system("color b2");// cambiamos el color de las letras y la pantalla
     	 do{
     		system ("pause");
     		system ("cls");
     	    cout<<"\t\t EMPRESA BUS PARRANDERO " <<endl;
	 	    cout<<"\n1.LIMA"<<endl;
	 	    cout<<"\n2.CUSCO"<<endl;
	 	    cout<<"\n3.PUNO"<<endl;
	 	    cout<<"\n4.Regresamos al menu anterior"<<endl;
	 	    cout<<"\nOPCION : ";cin>>destino; // elegimos un destino
	 	    Beep(587,500);  // reproduce sonidos agudos o graves
            Beep(659,500); // reproduce sonidos agudos o graves
	 	   switch(destino) // y de acuerdo al caso que escojamos realizara un proceso diferente por destino
	 	   {
	 	   	system("color a7");// cambiamos el color de las letras y la pantalla
	 	   	case 1:
	 	   		bus();
	 	   	break;
	 	   	case 2:
	 	   		bus();
	 	   	break;
	 	   	case 3:
	 	   		bus ();
	 	   	
	 	   	}
	       }while(destino!=4); // entonces este bucle funcionara mientras no precionemos el numero 4 
	      break; 	
     }
   }   while(opc != 2); // y de la misma forma el proframa terminara cuando ingresemos por teclado el numero dos
 }
