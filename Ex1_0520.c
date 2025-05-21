#include <math.h>

float calcular_tempo_queda(float altura) {
    const float g = 9.81;
    return sqrt((2 * altura) / g);
}
float calcular_distancia_liberacao(float velocidade, float altura) {
    float tempo = calcular_tempo_queda(altura);
    return velocidade * tempo;
}

#include <stdio.h>


float calcular_tempo_queda(float altura);
float calcular_distancia_liberacao(float velocidade, float altura);

int main() {
    float velocidade, altura;

    printf("velocidade do aviao: ");
    scanf("%f", &velocidade);

    printf("altura do aviao: ");
    scanf("%f", &altura);

    float tempo = calcular_tempo_queda(altura);
    float distancia = calcular_distancia_liberacao(velocidade, altura);

    printf("\nTempo queda: %.2f s\n", tempo);
    printf("Distancia liberacao: %.2f m\n", distancia);

    return 0;
}
