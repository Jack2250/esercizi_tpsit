#include <stdio.h>

int main() {
    int n;
    
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    // Dichiarazione delle variabili
    int numero, somma = 0, cont = 0;

    // Loop per la lettura dei numeri e calcolo della somma
    printf("Inserisci %d numeri interi:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numero);

        // Controlla se il numero è compreso tra 4 e 8 (inclusi)
        if (numero >= 4 && numero <= 8) {
            somma += numero;
            cont++;
        }
    }

    // Calcola e stampa la media
    if (cont > 0) {
        double media = (double)somma / cont;
        printf("La somma dei numeri compresi tra 4 e 8 (inclusi) è: %d\n", somma);
        printf("La media dei numeri compresi tra 4 e 8 (inclusi) è: %.2f\n", media);
    } else {
        printf("Nessun numero inserito rientra nel range da 4 a 8.\n");
    }

    return 0;
}
