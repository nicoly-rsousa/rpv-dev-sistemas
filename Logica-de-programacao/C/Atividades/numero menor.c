/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float n1=0,n2=0,n3=0;
    
    printf("Escreva 3 numeros: ");
    scanf("%f %f %f",&n1,&n2,&n3);
    
    if(n1<n2 && n1<n3){
          printf("O primeiro numero e o menor! \n");
    }
    else if(n2<n1 && n2<n3){
         printf("O segundo numero e o menor! \n");
    }

    else if(n3<n1 && n3<n2){
         printf("O terceiro numero e o menor!\n");
     } 
     
     else {
        printf("Numeros equivalentes !\n");
      }

        
    
    
    
    return 0;
}