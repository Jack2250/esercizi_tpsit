/* Scrivere un programma che dopo aver letto una stringa conti
quante vocali contiene */

#include <stdio.h>
#include <string.h>

int main(){
    int i=0,voc=0,lung=0;
    char str[20];
    printf("Inserisci la stringa");
    scanf("%s",str);
    lung=strlen(str); //Calcola lunghezza stringa
    printf("La lunghezza della stringa risulta essere: %d\n",lung);

    for(i=0;i<lung;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            voc++;
        }
    }
    printf("Le vocali presenti nella stringa sono: %d\n",voc);
    return 0;
}
