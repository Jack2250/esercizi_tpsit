#include <stdio.h>
int main()
{

    int numero = 10;
    // int *puntatore = &numero; //dichiarazione puntatore  = indirizzo variabile
    int *puntatore;
    puntatore = &numero;
    printf("Valore della variabile: %d", *puntatore);

    return 0;
}   
