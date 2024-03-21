#include <stdio.h>

int main() {
  
  int n = 0;
  int soma = 0;

  while (soma < 100) {
    printf("Please, enter the integer: ");
    scanf("%d", &n);
    soma += n;
  }

  printf("%d\n", soma);
  
  return 0;
}
