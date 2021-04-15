/*Construa um algoritmo que calcule a área de um círculo 
cujo raio é fornecido pelo usuário (use área= 3.14 x raio2)*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//dependendo do compilador tem que colocar -lm para que
//a biblioteca seja incluida antes de rodar o codigo

int main(){

    printf("Insira o valor do raio da circunferencia\n");
    float a;
    scanf("%f",&a);
//Usamos %f para float e double, numeros que podem usar virgula 
    float b = a*a;
    float c = b* 3.14;
//uma formula para fazer ² porem incluindo a biblioteca math...
//podemos usar o Pow para elevaçoes e o sqrt para raizes

    printf("o valor da area eh:\n %.2f",c);
// Coloca-se .2f pois quero apenas as 2 casas apos a virgula 


// faz-se uma pause pois o console pode fechar rapidamente 
    return 0;





}