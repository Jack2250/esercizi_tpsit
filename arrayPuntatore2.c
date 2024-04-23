#include <stdio.h>

int main()
{
    int lunghezza, vettore[100];

    // leggi la lunghezza del vettore
    printf("Inserisci la lunghezza del vettore");
    scanf("%d", &lunghezza);

    int *p = vettore; // inizializza il puntatore al primo elemento del vettore

    // Leggi gli elementi dell'array
    printf("Inserisci gli elementi del vettore");
    for (int i = 0; i < lunghezza; i++)
    {
        scanf("%d", p);
        p++;
    }

    printf("Gli elementi dell'array \n");
    for (int i = 0; i < lunghezza; i++)
    {
        printf("%d", vettore[i]);
    }
    return 0;
}
