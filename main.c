#include <stdio.h>

int main(void) {
  int i = 0, qnt = 0;
  double maior = 0, menor = 0, soma = 0;
  float media = 0;
  double vetor[30] = {
      31490.7866, 37277.9400, 37708.4303, 0.0000,     0.0000,     17934.2269,
      0.0000,     6965.1262,  24390.9374, 14279.6481, 0.0000,     0.0000,
      39807.6622, 27261.6304, 39775.6434, 29797.6232, 17216.5017, 0.0000,
      0.0000,     12974.2000, 28490.9861, 8748.0937,  8889.0023,  17767.5583,
      0.0000,     0.0000,     3071.3283,  48275.2994, 10299.6761, 39874.1073};

  for (; i < 30; i++) {

    soma = soma + vetor[i];

    if (vetor[i] > maior) {
      maior = vetor[i];
    }

    if (vetor[i] < menor) {
      menor = vetor[i];
    }
    if (vetor[i] != 0) {
      qnt++;
    }
  }
  
  media = soma / qnt;
  i = 0;
  qnt=0;
  for (; i < 30; i++) {
    if (vetor[i] > media) {
      printf("dia = %.4f\n", vetor[i]);
      qnt++;
    }
  }

  printf("\nA - O menor valor de faturamento ocorrido em um dia do mês: %.4f\n",
         menor);

  printf("\nB - O maior valor de faturamento ocorrido em um dia do mês: %.4f\n",
         maior);

  printf("\nC - Número de dias no mês em que o valor de faturamento diário foi superior à média mensal: %d\n", qnt);
}