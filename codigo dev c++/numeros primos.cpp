#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int k, j, i, V[100];
    
    k = 2;
    j = 2;
    
    for(i = 0; i < 100; i++)
    {
          if(j % k != 0)
          {
             do
             {
                 k++;
             }while(j % k == 0);
          }
          
          if(k == j)
          {
             V[i] = j;
             k = 2;
             j++;
          }
          
          if(k != j)
          {
             
             j++;
             k = 2;
          }      
    }
    
    cout<<"Numeros primos:\n"<<endl;
    getch ();
    return 0;
}
