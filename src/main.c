#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  printf("Kalkulator kurwa v1.2\n");

  while (1) {
    float a, b, result;
    char op, *lang = getenv("LANG");
    int pl = 0;

    if (lang && strncmp(lang, "pl_PL", 5) == 0) {
      pl = 1;
    }

    if (pl == 1) {
      printf("Podaj pierwszą liczbę: \n");
    } else {
        printf("Give first number: \n");
    }
    scanf("%f", &a);

    if (pl == 1) {
      printf("Podaj operator do obliczenia wyniku liczby (+, -, *, /): \n");
    } else {
        printf("Enter operator (+, -, *, /): \n");
    }
    scanf(" %c", &op);

    if (pl == 1) {
      printf("Podaj drugą liczbę: ");
    } else {
        printf("Give second number: \n");
    }
    scanf("%f", &b);

    switch (op) {
      case '+':
        result = a + b;
        break;

      case '-':
        result = a - b;
        break;

      case '*':
        result = a * b;
        break;

      case '/':
        if (b != 0) {
          result =  a / b;
        } else {
            if (pl == 1) {
              printf("Nie da się dzielić przez zero");
            } else {
                printf("Can't divide by zero\n");
              }
        } 
        continue;

      default:    
        if (pl == 1) {
          printf("Nieznany operator: %c \n", op);
        } else {
            printf("Unknown operator %c \n", op);
        }
        continue;
    }

    if (pl == 1) {
      printf("Wynik: %f \n", result);
    } else {
        printf("Result: %f \n", result);
    }
  }
  return 0;
}
