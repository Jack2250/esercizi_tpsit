#include <stdio.h>

int main() {
    int vettore1[5], vettore2[5], vettore3[5];
    
    // Input del primo vettore
    printf("Inserisci gli elementi del primo vettore:\n");
    for (int i = 0; i < 5; i++) {
        printf("Inserisci il %d° elemento: ", i + 1);
        scanf("%d", &vettore1[i]);
    }

    // Input del secondo vettore
    printf("\nInserisci gli elementi del secondo vettore:\n");
    for (int i = 0; i < 5; i++) {
        printf("Inserisci il %d° elemento: ", i + 1);
        scanf("%d", &vettore2[i]);
    }

    // Somma elemento per elemento e memorizzazione nel terzo vettore
    printf("\nIl vettore somma è:\n");
    for (int i = 0; i < 5; i++) {
        vettore3[i] = vettore1[i] + vettore2[i];
        printf("%d ", vettore3[i]);
    }
    
    return 0;
}
