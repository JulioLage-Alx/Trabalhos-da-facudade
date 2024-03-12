#include <stdlib.h>
#include <stdio.h>

int main (){
    float nota1,nota2,nota3;
    float peso1,peso2,peso3;
    float media;
    printf("Insira o valor da primeira nota\n");
        scanf("%f",&nota1);
    printf("Insira o valor do peso um \n");
        scanf("%f",&peso1);
    printf("Insira o valor da terceira nota\n");
        scanf("%f",&nota2);
    printf("Insira o valor do peso dois\n");
        scanf("%f",&peso2);
    printf("Insira o valor da segunda nota\n");
        scanf("%f",&nota3);
    printf("Insira o valor do peso tres\n");
        scanf("%f",&peso3);
    media = (peso1*nota1 + peso2*nota2 + peso3*nota3)/(peso1+peso2+peso3);
    printf("a media panderada e %f\n",media);
    return 0;
}