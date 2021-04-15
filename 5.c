/*Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a 
quantidade de metros avulsos de fios que ele precisa adquirir. 
Sabe-se que o construtor tem a quantidade total de fios em metros a serem utilizados na instalação elétrica 
da obra e que cada rolo de fio tem 50 metros.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    
    float a,b,c,d,e;

    printf("\n Quantos metros de fio voce prescisa?\n");
    scanf("%f",&a);
    
    

    b = 50;
    c = a/b;
    d = floor(c);
//floor arredonda o valor para baixo    
    e = (c - d)*b;

    printf("Voce vai comprar %.0f rolos\n ",d);
    

    printf("\nalem de prescisar %.2f metros de fios avulsos ",e);

         return 0;
}