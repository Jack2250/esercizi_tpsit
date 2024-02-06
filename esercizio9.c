#include <stdio.h>

int main() {
    int num_azioni = 0;
    int MAX_AZIONI = 100;

    while (1) {
        int giorno, mese, anno;
        float prezzo;
        char scelta;

        printf("\nInserisci la data di acquisto (giorno mese anno): ");
        scanf("%d %d %d", &giorno, &mese, &anno);
        printf("Inserisci il prezzo dell'azione: ");
        scanf("%f", &prezzo);

        num_azioni++;

        printf("\nVuoi inserire un'altra azione? (s/n): ");
        scanf(" %c", &scelta);

        if (scelta != 's' && scelta != 'S');
    }

    // Calcolo della somma e della media dei prezzi delle azioni
    float somma_prezzi = 0;
    float media_prezzi = 0;
    for (int i = 0; i < num_azioni; i++) {
        float prezzo;
        printf("\nInserisci il prezzo dell'azione %d: ", i + 1);
        scanf("%f", &prezzo);
        somma_prezzi += prezzo;
    }
    if (num_azioni > 0)
        media_prezzi = somma_prezzi / num_azioni;

    printf("\nSomma dei prezzi delle azioni: %.2f euro", somma_prezzi);
    printf("\nMedia dei prezzi delle azioni: %.2f euro", media_prezzi);

    // Calcolo del prezzo massimo e del prezzo minimo
    float prezzo_massimo = 0;
    float prezzo_minimo = 0;
    for (int i = 0; i < num_azioni; i++) {
        float prezzo;
        printf("\nInserisci il prezzo dell'azione %d: ", i + 1);
        scanf("%f", &prezzo);
        if (i == 0) {
            prezzo_massimo = prezzo;
            prezzo_minimo = prezzo;
        } else {
            if (prezzo > prezzo_massimo)
                prezzo_massimo = prezzo;
            if (prezzo < prezzo_minimo)
                prezzo_minimo = prezzo;
        }
    }

    printf("\nPrezzo massimo tra le azioni: %.2f euro", prezzo_massimo);
    printf("\nPrezzo minimo tra le azioni: %.2f euro", prezzo_minimo);

    // Calcolo della media con un importo compreso tra 2,50 e 3,50 euro
    int num_azioni_ristretto = 0;
    float somma_prezzi_ristretto = 0;
    float media_prezzi_ristretto = 0;
    for (int i = 0; i < num_azioni; i++) {
        float prezzo;
        printf("\nInserisci il prezzo dell'azione %d: ", i + 1);
        scanf("%f", &prezzo);
        if (prezzo >= 2.50 && prezzo <= 3.50) {
            somma_prezzi_ristretto += prezzo;
            num_azioni_ristretto++;
        }
    }
    if (num_azioni_ristretto > 0)
        media_prezzi_ristretto = somma_prezzi_ristretto / num_azioni_ristretto;

    printf("\nMedia dei prezzi delle azioni con prezzo tra 2,50 e 3,50 euro: %.2f euro", media_prezzi_ristretto);

    return 0;
}
