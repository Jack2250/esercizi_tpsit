#include <stdio.h>

int main() {
    int n;
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &n);

    int vettore[n];
    printf("Inserisci %d numeri interi:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vettore[i]);
    }

    int numeroUtente;
    printf("Inserisci il numero da cercare: ");
    scanf("%d", &numeroUtente);

    int ripetizioni = 0;
    printf("Il numero %d si trova nelle posizioni: ", numeroUtente);
    for (int i = 0; i < n; i++) {
        if (vettore[i] == numeroUtente) {
            printf("%d ", i + 1);
            ripetizioni++;
        }
    }

    if (ripetizioni > 0) {
        printf("\nIl numero %d si ripete %d volte nel vettore.\n", numeroUtente, ripetizioni);
    } else {
        printf("\nIl numero %d non si trova nel vettore.\n", numeroUtente);
    }

    return 0;
}
