#include <stdio.h>

// Funktion för att beräkna volymen av en kub
double cubeVolume(double sideLength) {
    return sideLength * sideLength * sideLength;
}

int main() {
    double sideLength, volume;

    // Fråga efter sidans längd
    printf("Ange kubens sidlängd i cm: ");
    scanf("%lf", &sideLength);

    // Beräkna volymen genom att anropa funktionen
    volume = cubeVolume(sideLength);

    // Skriv ut resultatet
    printf("Volymen av kuben med sidlängden %.2f cm är %.2f kubikcentimeter.\n", sideLength, volume);

    return 0;
}
