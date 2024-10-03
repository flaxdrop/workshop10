#include <stdio.h>

// Funktion som alltid returnerar värdet 143
int returnValue() {
    return 143;
}

int main() {
    int n = 0; // Initiera variabeln n till 0

    // Skriv ut värdet av n före anropet
    printf("Värdet av n före anropet: %d\n", n);

    // Tilldela resultatet från funktionen till n
    n = returnValue();

    // Skriv ut värdet av n efter anropet
    printf("Värdet av n efter anropet: %d\n", n);

    return 0;
}
