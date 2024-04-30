#include <stdio.h>

int main() {
    int N;
    float media = 0;
    int vettore[100];
    
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &N);
  
    printf("Inserisci gli elementi del vettore:\n");
    int *ptr = vettore; 
    for (int i = 0; i < N; i++) {
        scanf("%d", ptr + i); 
    }

    for (int i = 0; i < N; i++) {
        media += *(ptr + i);
    }
    media /= N;

    int massimo = *ptr; 
    int minimo = *ptr;
    for (int i = 1; i < N; i++) {
        if (*(ptr + i) > massimo) {
            massimo = *(ptr + i);
        }
        if (*(ptr + i) < minimo) {
            minimo = *(ptr + i);
        }
    }

    printf("La media del vettore è: %.2f\n", media);
    printf("Il massimo valore nel vettore è: %d\n", massimo);
    printf("Il minimo valore nel vettore è: %d\n", minimo);

    return 0;
}
