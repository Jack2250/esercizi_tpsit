// Dichiarare un puntatore a interi e assegnarli
// l'indirizzo di una variabile intera
// moltiplicare il valore della variabile
// tramite il puntatore e stamparne il contenuto

#include <stdio.h>
int main()
{

    int numero = 8;
    int *puntatore = &numero;
    *puntatore = *puntatore * 2;
    printf("Il numero raddoppiato è: %d\n", numero);

    return 0;
}
