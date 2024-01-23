#include <stdio.h>

int main()
{
    float soldi;
    int pastina=1;
    float panino = 1.5;
    int scelta;
    int giorno;
    
    printf("Inserisci soldi");
    scanf("%f",&soldi);
    
    
    while(soldi>0){
        printf("Cosa vuoi mangiare \n 1 panino \n 2 pastina");
        scanf("%d"&scelta);
        if(scelta=1){
            panino++;
        }else if(scelta=2){
            pastina++;
        }else{
            printf("scelta non valida");
        }
        
        giorno++
    }
    
    printf("Mario ha mangiato %d\n",giorno);
    printf("")

    return 0;
}
