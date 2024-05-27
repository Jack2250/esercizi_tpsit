#include <stdio.h>

int main()
{
    int lunghezza,n;
    do{
        printf("Inserisci la lunghezza dell'array");
        scanf("%d",&lunghezza);
    }while(lunghezza<=0);
   
    int vettore [lunghezza];
    int vettoreP[lunghezza];
    int count = 0;
   
    printf("Inserisci gli elementi dell'array");
    for(int i=0;i<lunghezza;i++){
        scanf("%d",&vettore[i]);
        if(vettore[i] % 2 == 0){
            vettoreP[count] = vettore[i];
            count++;
        }
       
    }
   
    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-i-1;j++){
            if(vettoreP[j]>vettoreP[j+1]){
                int temp= vettoreP[j+1];
                vettoreP[j+1]= vettoreP[j];
                vettoreP[j] = temp;
            }
        }
    }
    printf("----\n");
    for(int i=0; i<count;i++){
        printf("%d\n",vettoreP[i]);
    }
    return 0;
}
