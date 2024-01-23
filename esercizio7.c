#include <stdio.h>

int main() {
    int n, numero, massimo, minimo;

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    // Chiedi all'utente di inserire i numeri
    printf("Inserisci %d numeri:\n", n);

    // Leggi il primo numero e inizializza massimo e minimo
    scanf("%d", &numero);
    massimo = minimo = numero;

    // Leggi gli altri numeri e aggiorna massimo e minimo
    for (int i = 1; i < n; i++) {
        scanf("%d", &numero);

        if (numero > massimo) {
            massimo = numero;
        }

        if (numero < minimo) {
            minimo = numero;
        }
    }

    // Stampare il risultato
    printf("Il massimo numero inserito è: %d\n", massimo);
    printf("Il minimo numero inserito è: %d\n", minimo);

    return 0;
}
