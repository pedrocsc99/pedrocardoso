#include <stdio.h>
int main (void){
    int num= 0;
    int num2= 0;
    int i = num2;
    printf("Escolha o primeiro numero: ");
    scanf("%d", &num);
    printf("Escolha o segundo numero: ");
    scanf("%d", &num2);
    printf("Primeiro numero: %d",num);
    printf(" Segundo numero: %d", num2);
    for(i=num2;num<=i;i=i-1){
        if(i % 2 == 0){
        printf(" Numeros pares: %d", i); 
        } 
    } 
return 0;
}
