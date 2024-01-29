#include <stdio.h>

int main() {
    float soldi;
    int pastine = 0, panini = 0, giorni = 0;
    char scelta;

    printf("Inserisci la quantita' di soldi di Mario: ");
    scanf("%f", &soldi);

    while (1) {
        printf("Mario vuole mangiare una pastina (P) o un panino (B)? (P/B): ");
        scanf(" %c", &scelta);

        if (scelta == 'P') {
            if (soldi >= 1) {
                pastine++;
                soldi -= 1;
            } else {
                break;
            }
        } else if (scelta == 'B') {
            if (soldi >= 1.5) {
                panini++;
                soldi -= 1.5;
            } else {
                break;
            }
        } else {
            printf("Scelta non valida. Riprova.\n");
            continue;
        }

        giorni++;
    }

    printf("Mario ha mangiato per %d giorni.\n", giorni);
    printf("Ha mangiato %d pastine e %d panini.\n", pastine, panini);

    return 0;
}
