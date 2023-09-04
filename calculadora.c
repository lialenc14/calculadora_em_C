#include <stdio.h>
int main() {
    printf("Calculadora\n");
    int opcao;
    printf("Digite o número correspondente à operação desejada: \n");
    printf("1 - somar, 2 - subtrair, 3 - multiplicar, 4 - dividir: \n");
    scanf("%d", &opcao);
    printf("Digite o primeiro número da operação: \n");
    float num1;
    scanf("%f", &num1);
    printf("Digite o segundo número da operação: \n");
    float num2;
    scanf("%f", &num2);

    float somresult = num1 + num2;
    float subresult = num1 - num2;
    float multresult = num1 * num2;
    float divresult = num1 / num2;

    switch (opcao) {
        case 1:
        printf("O resultado da operação é:");
    }
}