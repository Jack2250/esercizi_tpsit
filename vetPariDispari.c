#include <stdio.h>

int main() {
    int n;
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &n);

    int vettore[n], pari[n], dispari[n];
    int contPari = 0, contDispari = 0;

    // Input del vettore
    printf("Inserisci %d numeri interi:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vettore[i]);
        
        // Separazione dei numeri pari e dispari
        if (vettore[i] % 2 == 0)
            pari[contPari++] = vettore[i];
        else
            dispari[contDispari++] = vettore[i];
    }

    // Output dei numeri pari
    printf("\nNumeri pari: ");
    for (int i = 0; i < contPari; i++) {
        printf("%d ", pari[i]);
    }

    // Output dei numeri dispari
    printf("\nNumeri dispari: ");
    for (int i = 0; i < contDispari; i++) {
        printf("%d ", dispari[i]);
    }

    return 0;
}
