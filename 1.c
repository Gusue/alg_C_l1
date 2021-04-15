/*Construa um algoritmo que leia um número inteiro de horas 
 mostre ao usuário o correspondente em minutos e segundos destas horas*/

#include <stdio.h>
#include <stdlib.h>

// int main retorna um numero inteiro
//void main n~ao retorna nada, nao prescisa de return.

void main(){
    //definindo a primeira variavel 
    int a = 0;
    printf("Insira as horas:\n");

    //pegando informaçoes passadas pelo usuario
    //& pegando o valor da var e armazenando na memoria
    scanf("%d",&a); 

    // Multiplicando variaveis
    int b = a*60 ;
    int c = b*60;

    printf("%d Horas sao %d Minutos ou %d segundos",a,b,c);


}