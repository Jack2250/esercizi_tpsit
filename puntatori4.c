#include <stdio.h>

int main()
{
    int numero = 10;
    int *puntatore = &numero;
    printf("Inserisci un nuovo valore:");
    scanf("%d", &numero);
    printf("Il nuovo valore inserito è: %d\n", numero);
    return 0;
}
