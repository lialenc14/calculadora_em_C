#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int opcao;
    float num1, num2;
    printf("Digite o número correspondente à operação desejada: \n");
    printf("1 - somar, 2 - subtrair, 3 - multiplicar, 4 - dividir: \n");
    scanf("%d", &opcao);
    
    printf("Digite o primeiro número da operação: \n");
    scanf("%f", &num1);
    printf("Digite o segundo número da operação: \n");
    scanf("%f", &num2);

    float somresult = num1 + num2;
    float subresult = num1 - num2;
    float multresult = num1 * num2;
    float divresult = num1 / num2;

    switch (opcao) {
        case 1:
            printf("O resultado da operação é: %.2f\n", somresult);
            break;
        case 2:
            printf("O resultado da operação é: %.2f\n", subresult);
            break;
        case 3:
            printf("O resultado da operação é: %.2f\n", multresult);
            break;
        case 4:
            printf("O resultado da operação é: %.2f\n", divresult);
            break;
        default:
            printf("Operação inexistente\n");
            break;
    }
}
