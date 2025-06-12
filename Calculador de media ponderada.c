#include <stdio.h>
int main(){
    float n1, n2, n3, media;
    
    printf("Digite a 1° nota: ");
    scanf("%f",&n1);
    
    printf("Digite a 2° nota: ");
    scanf("%f",&n2);
    
    printf("Digite a 3° nota: ");
    scanf("%f",&n3);
    
    media = (n1*0.3) + (n2*0.5) + (n3*0.2);
    
    if(media>=7){
    printf("Parabens Você Passou! Sua Media Ponderada Final Foi: %.1f",media);
    }else{
        printf("Você foi reprovado, Sua Media Ponderada Final foi: %.1f",media);
    }
    return 0;
}