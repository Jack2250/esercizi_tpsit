#include <stdio.h>

int main()
{
    int lunghezza,n;
    do{
        printf("Inserisci la lunghezza dell'array");
        scanf("%d",&lunghezza);
    }while(lunghezza<=0);
   
    int vettore [lunghezza];
   
    printf("Inserisci gli elementi dell'array");
    for(int i=0;i<lunghezza;i++){
        scanf("%d",&vettore[i]);
       
    }
   
    printf("Inserisci quanti elementi vuoi visualizzare");
    do{
        scanf("%d",&n);
    }while(n>lunghezza);
   
    for(int i=0;i<lunghezza-1;i++){
        for(int j=0;j<lunghezza-i-1;j++){
            if(vettore[j]>vettore[j+1]){
                int temp= vettore[j+1];
                vettore[j+1]= vettore[j];
                vettore[j] = temp;
            }
        }
    }
   
    for(int i=0; i<n;i++){
        printf("%d",vettore[i]);
    }
    return 0;
}
