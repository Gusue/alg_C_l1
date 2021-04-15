/*Construa um algoritmo que calcule a média aritmética de 3 números quaisquer fornecidos pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    printf(" Digite o primeiro numero:\n");
    scanf ("%d",&a);
    printf(" Digite o segundo numero:\n");
    scanf ("%d",&b);
    printf(" Digite o terceiro numero:\n");
    scanf ("%d",&c);
        int d = (a + b + c)/2;  
//formula para a media
    printf("\n A media aritmetica desses numeros eh:\n%d",d);

    return 0;

}