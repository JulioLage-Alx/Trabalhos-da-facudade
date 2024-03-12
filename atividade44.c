#include <stdio.h>
#include <stdlib.h>

int main(){
    float litros;
    float valor, valor_1,valor_2,valor_3,valor_4;
    float quantidade, tarifa, total;
    printf("Insira a quantidade de litros\n");
    scanf("%f",&litros);
    valor = litros;
    valor_1 = valor;
    if (valor_1>75){
        valor_2 = valor_1-75 ;
        valor_1 = 75;
    } 
    
    if (valor_2 > 150){
        valor_3 = valor_2 - 150;
        valor_2 = 150;
    } 
    
    if (valor_3>225){
        valor_4 = valor_3- 225;
        valor_3= 225;
    }
    quantidade = (valor_1*2.11) + (valor_2*4.496)+ (valor_3*6.968)+(valor_4*9.512)+305.55;
    tarifa = (valor_1*1.56) + (valor_2*3.327)+ (valor_3*5.156)+(valor_4*7.039)+226.05;
    total = quantidade + tarifa;
    printf("%.2f    %f      %f  %f", total,valor_1,valor_2,valor_3);
  
    return 0;


}