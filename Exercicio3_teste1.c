#include <stdio.h>
int main(void){
    int numA= 0;
    printf("digite o numero de alunos ");
    scanf("%d",&numA);
    int vet[numA];
    int i=numA;
    while(i>=0){

        printf("digite uma nota: ");
        scanf("%d", &vet[i]);
        printf ("Notas: %d", vet[i]);
        i= i-1; 
    }
    int soma=0;
    int media=0;
    while (i>0){
        soma=soma + vet[i];
        i=i-1;
    return soma;
    }  
    media=(soma/i);
    printf(" a media e: %d",media);   
return 0;
}
