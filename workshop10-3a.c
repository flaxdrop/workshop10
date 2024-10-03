#include <stdio.h>

// Modifierad printline-funktion som tar en symbol som parameter
void printLine(char symbol) {
    for (int i = 0; i < 80; i++) {
        printf("%c", symbol); // Skriver ut den valda symbolen
    }
    printf("\n");
}

int main() {
    // Ange olika symboler för varje rad
    char symbol1 = '-';
    char symbol2 = '=';
    char symbol3 = '*';

    printLine(symbol1); // Första raden med '-'

    printf("\n                     C Programming Language Authors\n");

    printLine(symbol2); // Andra raden med '='

    printf("\n       1. Brian W. Kernighan");
    printf("\n       2. Dennis M. Ritchie\n");

    printLine(symbol3); // Tredje raden med '*'

    return 0;
}
