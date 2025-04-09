#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  printf("Kalkulator kurwa v1.1.1\n");

  while (1) {
    float a, b, result;
    char op, *lang = getenv("LANG");

    if (lang && strcmp(lang, "pl_PL.UTF-8") == 0) {
      printf("Podaj pierwszą liczbę: \n");
    } else {
        printf("Give first number: \n");
    }
    scanf("%f", &a);

    if (lang && strcmp(lang, "pl_PL.UTF-8") == 0) {
      printf("Podaj operator do obliczenia wyniku liczby (+, -, *, /): \n");
    } else {
        printf("Enter operator (+, -, *, /): \n");
    }
    scanf(" %c", &op);

    if (lang && strcmp(lang, "pl_PL.UTF-8") == 0) {
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
            if (lang && strcmp(lang, "pl_PL.UTF-8") == 0) {
              printf("Nie da się dzielić przez zero");
            } else {
                printf("Can't divide by zero\n");
              }
        } 
        break;

      default:    
        if (lang && strcmp(lang, "pl_PL.UTF-8") == 0) {
          printf("Nieznany operator: %c \n", op);
        } else {
            printf("Unknown operator %c \n", op);
        break;
        }
    }

    if (lang && strcmp(lang, "pl_PL.UTF-8") == 0) {
      printf("Wynik: %f \n", result);
    } else {
        printf("Result: %f \n", result);
    }
  }
  return 0;
}
