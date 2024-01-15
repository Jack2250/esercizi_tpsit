#include <stdio.h>

int main() {
    int compratore1Offerta, compratore2Offerta;
    int turno = 1; // 1 per il primo compratore, 2 per il secondo compratore
    int offerteTotali = 0;

    printf("Simulazione di un'asta tra due compratori.\n");

    while (1) {
        if (turno == 1) {
            printf("Compratore 1, inserisci la tua offerta (inserisci 0 per ritirarti): ");
            scanf("%d", &compratore1Offerta);

            if (compratore1Offerta == 0) {
                printf("Compratore 1 si è ritirato. Compratore 2 si è aggiudicato l'asta con un'offerta di 0 dopo %d offerte.\n", offerteTotali);
                break;
            }
        } else {
            printf("Compratore 2, inserisci la tua offerta (inserisci 0 per ritirarti): ");
            scanf("%d", &compratore2Offerta);

            if (compratore2Offerta == 0) {
                printf("Compratore 2 si è ritirato. Compratore 1 si è aggiudicato l'asta con un'offerta di 0 dopo offerte.\n", offerteTotali);
                break;
            }
        }

        turno = (turno % 2) + 1; // Cambia il turno tra i compratori
        offerteTotali++;
    }

    return 0;
}
