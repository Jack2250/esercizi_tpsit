#include <stdio.h>

int main() {
    double popolazioneIniziale, popolazioneDaRaggiungere, divisione;
    int anni = 0;

    // Input della popolazione iniziale e quella da raggiungere
    printf("Inserisci la popolazione iniziale di alghe: ");
    scanf("%f", &popolazioneIniziale);

    printf("Inserisci la popolazione da raggiungere o superare: ");
    scanf("%f", &popolazioneDaRaggiungere);

    // Calcolo del numero di anni necessari
    while (popolazioneIniziale < popolazioneDaRaggiungere) {
        popolazioneIniziale *= 2;   // Raddoppia la popolazione ogni anno
        anni ++;
        divisione=popolazioneIniziale /3;   // Cala di un terzo l'anno successivo
        popolazioneIniziale=popolazioneIniziale-divisione;
        anni++;
    }

    // Output del risultato
    printf("La popolazione raggiunge o supera il valore desiderato dopo %d anni.\n", anni);

    return 0;
}
