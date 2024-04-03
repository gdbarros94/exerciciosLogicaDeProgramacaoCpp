#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    int soma = num1 + num2;
    printf("A soma dos numeros e: %d\n", soma);
    return 0;
}