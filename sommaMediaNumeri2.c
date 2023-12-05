#include <stdio.h>


int main()
{
   int n,num,somma=0,cont;
   float media;
   do
   {
       printf("Quanti numeri vuoi inserire? ");
       scanf("%d", &n);
       if(n<=0){
           printf("Hai inserito un numero errato. Reinserisci\n");
       }
   }while(n<=0);
   cont=n;
   while(n>0)
   {
       printf("Inserisci un numero");
       scanf("%d",&num);
       somma=somma+num;
       n--;
   }
   media=(float)somma/cont;
   printf("La somma è %d\n",somma);
   printf("La media è %f\n",media);
   return 0;
}

