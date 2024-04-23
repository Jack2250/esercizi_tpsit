// Dichiarare un puntatore a interi e assegnarli
// l'indirizzo di una variabile intera.
// Incrementare il valore della variabile
// tramite il puntatore e stamparne il risultato

#include <stdio.h>

int main()
{

    int numero = 5;
    int *puntatore = &numero;
    (*puntatore)++;
    printf("Il numero incrementato è: %d\n", numero);

    return 0;
}
