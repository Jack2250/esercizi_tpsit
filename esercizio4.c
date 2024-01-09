#include <stdio.h>

int main() {
    int N;
    int somma = 0;
    int contatorePrimi = 0;
    int numeroCorrente = 2;  // 2 è il primo numero primo

    // Input del numero N
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &N);


    // Calcoliamo la somma dei primi N numeri primi alternati
    while (contatorePrimi < N) {
        // Verifichiamo se il numeroCorrente è primo
        int divisore = 2;
        while (divisore * divisore <= numeroCorrente) {
            if (numeroCorrente % divisore == 0) {
                // Il numeroCorrente non è primo
                break;
            }
            divisore++;
        }

        // Se il ciclo è terminato senza trovare un divisore, il numero è primo
        if (divisore * divisore > numeroCorrente) {
            somma += numeroCorrente;
            contatorePrimi++;

            // Stampiamo il numero primo e la somma finora
            printf("Numero primo: %d\n" , numeroCorrente);
        }

        // Passiamo al successivo numero
        numeroCorrente++;
    }

    printf("La somma dei primi %d numeri primi alternati è: %d\n", N, somma);

    return 0;
}
