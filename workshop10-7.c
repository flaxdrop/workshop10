#include <stdio.h>

// Funktion för att presentera menyn och returnera valet av operation
int menu() {
    int choice;
    printf("\n--- Enkel Kalkylator ---\n");
    printf("1. Addition\n");
    printf("2. Subtraktion\n");
    printf("3. Multiplikation\n");
    printf("4. Division\n");
    printf("5. Avsluta\n");
    printf("Välj en operation (1-5): ");
    scanf("%d", &choice);
    return choice;
}

// Funktion för att utföra addition
double add(double a, double b) {
    return a + b;
}

// Funktion för att utföra subtraktion
double subtract(double a, double b) {
    return a - b;
}

// Funktion för att utföra multiplikation
double multiply(double a, double b) {
    return a * b;
}

// Funktion för att utföra division
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Fel: Division med noll är inte tillåten!\n");
        return 0;
    }
}

// Funktion för att utföra den valda operationen
double calculate(int operation) {
    double num1, num2, result = 0;

    // Kontrollera om användaren valt att avsluta
    if (operation == 5) {
        return 0;
    }

    // Ta in två tal från användaren
    printf("Ange två tal:\n");
    printf("Tal 1: ");
    scanf("%lf", &num1);
    printf("Tal 2: ");
    scanf("%lf", &num2);

    // Välj rätt operation och beräkna resultatet
    switch (operation) {
        case 1:
            result = add(num1, num2);
            break;
        case 2:
            result = subtract(num1, num2);
            break;
        case 3:
            result = multiply(num1, num2);
            break;
        case 4:
            result = divide(num1, num2);
            break;
        default:
            printf("Ogiltigt val!\n");
            break;
    }

    return result;
}

// Funktion för att visa resultatet
void displayResult(double result, int operation) {
    if (operation != 5) {
        printf("Resultatet är: %.2f\n", result);
    }
}

// Funktion för att kontrollera om användaren vill fortsätta
int continueProgram() {
    char cont;
    printf("Vill du fortsätta? (j/n): ");
    scanf(" %c", &cont);
    if (cont == 'j' || cont == 'J') {
        return 1;  // Fortsätt
    } else {
        return 0;  // Avsluta
    }
}

int main() {
    int choice;
    double result;
    int continueCalc = 1;

    // Huvudloop för kalkylatorn
    while (continueCalc) {
        choice = menu();  // Visa menyn och få användarens val

        if (choice == 5) {
            break;  // Avsluta om användaren väljer 5
        }

        result = calculate(choice);  // Utför beräkningen

        displayResult(result, choice);  // Visa resultatet

        continueCalc = continueProgram();  // Kontrollera om användaren vill fortsätta
    }

    printf("Programmet avslutas.\n");
    return 0;
}
