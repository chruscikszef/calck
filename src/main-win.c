#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <wchar.h>

int main() {
  printf("Kalkulator kurwa v1.2\n");

  while (1) {
    float a, b, result;
    char op, *lang = getenv("LANG");
    int pl = 0;

    WCHAR localeName[LOCALE_NAME_MAX_LENGTH];
    if (GetUserDefaultLocaleName(localeName, LOCALE_NAME_MAX_LENGTH)) {
        if (wcsncmp(localeName, L"pl-PL", 5) == 0) {
            pl = 1;
        }
    }

    if (pl) {
      printf("Podaj pierwszą liczbę: \n");
    } else {
        printf("Give first number: \n");
    }
    scanf("%f", &a);

    if (pl) {
      printf("Podaj operator do obliczenia wyniku liczby (+, -, *, /): \n");
    } else {
        printf("Enter operator (+, -, *, /): \n");
    }
    scanf(" %c", &op);

    if (pl) {
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
            if (pl) {
              printf("Nie da się dzielić przez zero\n");
            } else {
                printf("Can't divide by zero\n");
              }
        } 
        continue;

      default:    
        if (pl) {
          printf("Nieznany operator: %c \n", op);
        } else {
            printf("Unknown operator %c \n", op);
        }
        continue;
    }

    if (pl) {
      printf("Wynik: %f \n", result);
    } else {
        printf("Result: %f \n", result);
    }
  }
  return 0;
}
