#include <stdio.h>

int main() {
    float peso, altura, imc;
    char sexo;

    printf("Informe seu sexo (M) ou (F): ");
    scanf(" %c", &sexo);  // Espaço antes do %c para limpar buffer

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (sexo == 'M') {
        if (imc >= 43) {
            printf("Obesidade mórbida\n");
        } else if (imc >= 40) {
            printf("Obesidade severa\n");
        } else if (imc >= 30) {
            printf("Obesidade Moderada\n");
        } else if (imc >= 25) {
            printf("Obesidade Leve\n");
        } else if (imc >= 20) {
            printf("Seu IMC está normal\n");
        } else {
            printf("Abaixo do normal\n");
        }
    } else if (sexo == 'F') {
        // Aqui pode colocar condições para mulheres, se quiser
        printf("Sexo feminino - funcionalidade não implementada.\n");
    } else {
        printf("Sexo inválido.\n");
    }

    return 0;
}