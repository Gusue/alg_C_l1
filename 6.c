/*Leia 2 valores A e B, que correspondem a 2 notas de um aluno. 
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 
(A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a,b,c,d,e,f;
    printf("\n Insira a primeira nota: ");
    scanf("%f",&a);

    printf("\n Insira a Segunda nota:");
    scanf("%f",&b);

    c = a*3.5;
    d = b*7.5;
    e = (c+b)/11;

    if (e >= 10)
    
       printf("\n Sua media foi de 10, Parabens");
    
    else
//funcao if else serve para determinar uma verdade, se for verdade, faça isso
// caso contrario faça outra coisa 

    printf("\n Sua media foi de: %.2f",e);

    return 0 ;


}

