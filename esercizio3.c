#include <stdio.h>

int main() {
    int N, numero, sommaPositivi = 0, sommaNegativi = 0, contPositivi = 0, contNegativi = 0;
    float mediaPositivi, mediaNegativi;

    // Input
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numero);

        if (numero >= 0) {
            // Numero positivo
            sommaPositivi += numero;
            contPositivi++;
        } else {
            // Numero negativo
            sommaNegativi += -numero;  // Calcolo del valore assoluto
            contNegativi++;
        }
    }

    // Calcolo delle medie
    if (contPositivi > 0) {
        mediaPositivi = sommaPositivi / contPositivi;
    } else {
        mediaPositivi = 0;
    }

    if (contNegativi > 0) {
        mediaNegativi = sommaNegativi / contNegativi;
    } else {
        mediaNegativi = 0;
    }

    // Output
    printf("Somma dei numeri positivi: %d\n", sommaPositivi);
    printf("Somma dei numeri negativi (valore assoluto): %d\n", sommaNegativi);
    printf("Conteggio dei numeri positivi: %d\n", contPositivi);
    printf("Conteggio dei numeri negativi: %d\n", contNegativi);
    printf("Media dei numeri positivi: %.2f\n", mediaPositivi);
    printf("Media dei numeri negativi: %.2f\n", mediaNegativi);

    return 0;
}
