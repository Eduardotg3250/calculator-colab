#include <stdio.h>
#include <math.h>
// Este código tem a finalidade de calcular o resultado de uma exponenciação a partir dois valores

// função para calcular a potência
int potencia(int base, int expoente) { 
    int resultado;
    resultado = (int) pow(base, expoente);
    return resultado;
}

// executar o código
int main() {
    int base, expoente, resultado;

    // recebe o valor base do usuário
    printf("Digite o numero base:\n");
    scanf("%d", &base);

    // recebe o expoente do usuário
    printf("Digite o numero expoente:\n");
    scanf("%d", &expoente);

    // o resultado é calculado ao chamar a função potencia
    resultado = potencia(base, expoente);

    // Revela o resultado ao usuário
    printf("O resultado de %d elevado a %d é: %d\n", base, expoente, resultado);
}

