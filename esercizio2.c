#include <stdio.h>

int main() {
    float importo, sconto, prezzoNetto;
    char continua;

    do {
        
        printf("Inserisci l'importo: ");
        scanf("%f", &importo);

        
        if (importo >= 0 && importo <= 500) {
            sconto = importo * 0.1;
        } else if (importo > 500 && importo <= 1000) {
            sconto = importo * 0.2;
        } else {
            sconto = importo * 0.3;
        }

        // Calcolo del prezzo netto
        prezzoNetto = importo - sconto;

        // Output dello sconto e del prezzo netto
        printf("Sconto: %.2f\n", sconto);
        printf("Prezzo netto: %.2f\n", prezzoNetto);

        // Chiede se l'utente vuole inserire un'altra somma di denaro
        printf("Vuoi inserire un'altra somma di denaro? (s/n): ");
        scanf(" %c", &continua);

    } while (continua == 's');

    return 0;
}
