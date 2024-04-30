#include <stdio.h>

int main()
{
    int N, somma = 0, vettore[100], massimo, minimo;
    int *punt = vettore;
    int vetpari[100], vetdispari[100];

    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &N);

    // Leggi gli elementi del vettore vedi es7 punt
    printf("Inserisci gli elementi del vettore:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", punt);
        punt++;
    }
    for (int i = 0; i < N; i++)
        printf(" %d", vettore[i]);
    printf(" \n");
    punt = vettore;

    for (int i = 0; i < N; i++)
    {
        if (vettore[i] % 2 == 0)
        {
            vetpari[i] = vettore[i];
            printf("i numeri pari sono: %d", vetpari[i]);
            printf("\n");
        }
        else
        {
            vetdispari[i] = vettore[i];
            printf("i numeri dispari sono %d", vetdispari[i]);
            printf("\n");
        }
    }
    // Calcolo della media
    for (int i = 0; i < N; i++)
    {
        somma += vetdispari[i];
    }
    printf("la somma è %d\n", somma);
    float media = (float)somma / N;
    // Stampare i risultati
    printf("La media del vettore è: %.2f\n", media);

    return 0;
}
