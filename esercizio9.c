#include <stdio.h>

int main() {
    int numAzioni = 0;

    while (1) {
        int giorno, mese, anno;
        float prezzo;
        char scelta;

        printf("\nInserisci la data di acquisto (giorno mese anno): ");
        scanf("%d %d %d", &giorno, &mese, &anno);
        printf("Inserisci il prezzo dell'azione: ");
        scanf("%f", &prezzo);

        numAzioni++;

        printf("\nVuoi inserire un'altra azione? (s/n): ");
        scanf(" %c", &scelta);

        if (scelta != 's' && scelta != 'S');
    }

    // Calcolo della somma e della media dei prezzi delle azioni
    float sommaPrezzi = 0;
    float mediaPrezzi = 0;
    for (int i = 0; i < numAzioni; i++) {
        float prezzo;
        printf("\nInserisci il prezzo dell'azione %d: ", i + 1);
        scanf("%f", &prezzo);
        sommaPrezzi += prezzo;
    }
    if (numAzioni > 0)
        mediaPrezzi = sommaPrezzi / numAzioni;

    printf("\nSomma dei prezzi delle azioni: %.2f euro", sommaPrezzi);
    printf("\nMedia dei prezzi delle azioni: %.2f euro", mediaPrezzi);

    // Calcolo del prezzo massimo e del prezzo minimo
    float prezzoMassimo = 0;
    float prezzoMinimo = 0;
    for (int i = 0; i < numAzioni; i++) {
        float prezzo;
        printf("\nInserisci il prezzo dell'azione %d: ", i + 1);
        scanf("%f", &prezzo);
        if (i == 0) {
            prezzoMassimo = prezzo;
            prezzoMinimo = prezzo;
        } else {
            if (prezzo > prezzoMassimo)
                prezzoMassimo = prezzo;
            if (prezzo < prezzoMinimo)
                prezzoMinimo = prezzo;
        }
    }

    printf("\nPrezzo massimo tra le azioni: %.2f euro", prezzoMassimo);
    printf("\nPrezzo minimo tra le azioni: %.2f euro", prezzoMinimo);

    // Calcolo della media con un importo compreso tra 2,50 e 3,50 euro
    int numAzioniRistretto = 0;
    float sommaPrezziRistretto = 0;
    float mediaPrezziRistretto = 0;
    for (int i = 0; i < numAzioni; i++) {
        float prezzo;
        printf("\nInserisci il prezzo dell'azione %d: ", i + 1);
        scanf("%f", &prezzo);
        if (prezzo >= 2.50 && prezzo <= 3.50) {
            sommaPrezziRistretto += prezzo;
            numAzioniRistretto++;
        }
    }
    if (numAzioniRistretto > 0)
        mediaPrezziRistretto = sommaPrezziRistretto / numAzioniRistretto;

    printf("\nMedia dei prezzi delle azioni con prezzo tra 2,50 e 3,50 euro: %.2f euro", mediaPrezziRistretto);

    return 0;
}
