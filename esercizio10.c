#include <stdio.h>

int main() {
    int N;
    printf("Inserisci il numero di numeri (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Numero non valido. Riprova con un numero positivo.\n");
        
    }

    int numbers[N];
    int sum_totale = 0, sum_pari = 0, sum_dispari = 0;
    int count_pari = 0, count_dispari = 0;

    // Input dei numeri
    printf("Inserisci %d numeri:\n", N);
    for (int i = 0; i < N; i++) {
        do {
            scanf("%d", &numbers[i]);
            if (numbers[i] <= 0) {
                printf("Inserisci un numero maggiore di zero: ");
            }
        } while (numbers[i] <= 0);

        sum_totale += numbers[i];

        // Aggiornamento somme e contatori per pari/dispari
        if (numbers[i] % 2 == 0) {
            sum_pari += numbers[i];
            count_pari++;
        } else {
            sum_dispari += numbers[i];
            count_dispari++;
        }
    }

    // Calcolo medie
    double media_totale = (double)sum_totale / N;
    double media_pari, media_dispari;
    if (count_pari > 0) {
        media_pari = (double)sum_pari / count_pari;
    } else {
        media_pari = 0;
    }
    if (count_dispari > 0) {
        media_dispari = (double)sum_dispari / count_dispari;
    } else {
        media_dispari = 0;
    }

    // Trova massimo e minimo per numeri pari
    int max_pari = -1, min_pari = -1;
    if (count_pari > 0) {
        max_pari = min_pari = numbers[0];
        for (int i = 1; i < N; i++) {
            if (numbers[i] % 2 == 0) {
                if (numbers[i] > max_pari) max_pari = numbers[i];
                if (numbers[i] < min_pari) min_pari = numbers[i];
            }
        }
    }

    // Trova massimo e minimo per numeri dispari
    int max_dispari = -1, min_dispari = -1;
    if (count_dispari > 0) {
        max_dispari = min_dispari = numbers[0];
        for (int i = 1; i < N; i++) {
            if (numbers[i] % 2 != 0) {
                if (numbers[i] > max_dispari) max_dispari = numbers[i];
                if (numbers[i] < min_dispari) min_dispari = numbers[i];
            }
        }
    }

    // Stampa risultati
    printf("La media totale dei numeri inseriti è: %.2f\n", media_totale);
    printf("La media dei numeri pari inseriti è: %.2f\n", media_pari);
    printf("La media dei numeri dispari inseriti è: %.2f\n", media_dispari);
    if (max_pari != -1) {
        printf("Il massimo dei numeri pari inseriti è: %d\n", max_pari);
        printf("Il minimo dei numeri pari inseriti è: %d\n", min_pari);
    } else {
        printf("Non sono stati inseriti numeri pari.\n");
    }
    if (max_dispari != -1) {
        printf("Il massimo dei numeri dispari inseriti è: %d\n", max_dispari);
        printf("Il minimo dei numeri dispari inseriti è: %d\n", min_dispari);
    } else {
        printf("Non sono stati inseriti numeri dispari.\n");
    }

    return 0;
}
