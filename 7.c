/*Escreva um programa que leia o nome do funcionário, o sexo (F ou M), o número de
matrícula do funcionário, o número de horas trabalhadas, o valor que recebe por hora
e calcule o salário desse funcionário. A seguir, mostre todos os dados na tela, os dados
de entrada e os dados de saída.*/

#include <stdio.h>
#include <stdlib.h>

    int main(){
    float d,e,f,g;
    char a[50];
    char b;

// prescisa ver quantos caracteres necessita, usando string
//no scanf eh %s ja que o %c eh apenas 1 caracter
//        scanf("%s",&a);

        printf("\n Digite seu nome:");
        fgets(a,50,stdin);
//fgets faz com que leia a string podendo usar  espaços        
        
        b == 'Z';

        printf("\n Digite seu sexo, F para feminino e M para masculino:");
        scanf("%c",&b);

        printf("\n Digite sua matricula:");
        scanf("%f",&d);


        printf("\n Digite suas horas trabalhadas:");
        scanf("%f",&e);

        printf("\n Digite o valor que recebe por hora:");
        scanf("%f",&f);

        g = (e*f);
        
        if (b == 'F')

        printf("\n%s Sexo Feminino\n Matricula: %.0f\n Trabalhou por: %.0f horas \n Recebe: %.2f por hora\n Salario: %.2f\n",a,d,e,f,g);

        else 

        printf("\n Nome: %s Sexo: Masculino\n Matricula: %.0f\n Trabalhou por: %.0f horas \n Recebe: %.2f por hora\n Salario: %.2f\n",a,d,e,f,g);



        system("pause");
        return 0 ;
//system pause eh para que o terminal nao feche repentinamente        



    }