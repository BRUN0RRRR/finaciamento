#include <stdio.h>

void main(){
float salario, finaciamento,conta;

printf("Entre com o seu salario: ");
scanf("%d", &salario);
printf("Entre com o seu financiamento: ");
scanf("%d", &finaciamento);

 conta = salario * 5;

 if(conta > finaciamento){
    printf("Financiamento Concedido");
     printf("\nObrigado por nos consultar.");

 }else{
 printf("Financiamento negado");
 printf("\nObrigado por nos consultar.\n");

 }
 system("pause");
}
