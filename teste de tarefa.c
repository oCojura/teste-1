#include <stdio.h>
#include <stdlib.h>

int main() {
    char nomeProduto[100];
    int quantidade;
    float precoUnitario, valorTotal;

    printf("Qual o nome do produto: ");
    scanf("%s", nomeProduto);
    printf("Qual a quantidade vendida: ");
    scanf("%i", &quantidade);
    printf("Qual o valor unitario desse produto: ");
    scanf("%f", &precoUnitario);

    valorTotal = quantidade * precoUnitario;

    printf("O valor total de vendas foi de: %.2f\n", valorTotal);

    return 0;
}
