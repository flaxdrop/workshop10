#include <stdio.h>

// Modifierad printLine-funktion som tar en symbol och antal tecken som parametrar
void printLine(char symbol, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", symbol); // Skriver ut symbolen 'n' antal gånger
    }
    printf("\n");
}

int main() {
    // Skriver ut olika rader med olika symboler och antal tecken
    printLine('a', 80); // Första raden med '-' och 80 tecken

    printf("\n                     C Programming Language Authors\n");

    printLine('$', 80); // Andra raden med '=' och 80 tecken

    printf("\n       1. Brian W. Kernighan");
    printf("\n       2. Dennis M. Ritchie\n");

    printLine('*', 80); // Tredje raden med '*' och 80 tecken

    return 0;
}
