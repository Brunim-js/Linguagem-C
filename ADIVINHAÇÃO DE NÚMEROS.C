#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
 srand(time(NULL));
 int num;
 int numero = rand() % 10 + 1;
    printf("---JOGO DE ADIVINHAÇÃO DE NÚMEROS---\n");
 do{
     printf("Digite um número de 1 a 10: ");
     scanf("%d",&num);
 }while(num<1||num>10);
 
 
 if(num==numero){
     printf("Parabens vc acertou!");
 }else{
     printf("Você errou o número, o certo era: %d",numero);
 }
   
    return 0;
    
}