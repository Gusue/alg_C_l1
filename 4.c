/* Construa um algoritmo que a partir da leitura de dois números 
forneça o resto e o quociente da divisão do primeiro pelo segundo número.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,rest,quotient;
    
    printf("\n Insira o primeiro valor: ");
    scanf("%d",&a);

    printf("\n Insira o segundo valor: ");
    scanf("%d",&b);

    rest = a%b;
    quotient = (a/b);  
//% eh o mod, ele que define o resto da divisao

    printf("\n o resto da divisao eh: %d\n \n o quociente eh: %d\n",rest,quotient);  
}