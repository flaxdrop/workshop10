#include <stdio.h>

// Funktion för att beräkna medelvärdet av tre heltal
double average3(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3.0;  // Använd 3.0 för att få ett flyttalsvärde
}

int main() {
    int tal1, tal2, tal3;
    double medelvärde;

    // Fråga efter tre tal
    printf("Ange tre heltal:\n");
    printf("Tal 1: ");
    scanf("%d", &tal1);
    printf("Tal 2: ");
    scanf("%d", &tal2);
    printf("Tal 3: ");
    scanf("%d", &tal3);

    // Beräkna medelvärdet genom att anropa funktionen
    medelvärde = average3(tal1, tal2, tal3);

    // Skriv ut resultatet
    printf("Medelvärdet av talen %d, %d, och %d är %.2f.\n", tal1, tal2, tal3, medelvärde);

    return 0;
}
