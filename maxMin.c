//Dopo aver inserito N numeri interi
//con N scelto dall'utente dterminare il
//numero massimo e minimo inseriti

#include <stdio.h>

int main()
{
   int n,num,max=-99999,min=99999,i=0;
   do
   {
        printf("Quanti numeri vuoi inserire?\n");
        scanf("%d",&n);
   }while(n<=0);
   while(n>0){
     printf("inserisci il %d numero\n",(i+1));
   scanf("%d",&num);
   if(min>num)
   {
        min=num;
   }
   if(max<num)
   {
        max=num;
   }
   n--;
   i++;
   }
   printf("Il numero massimo è %d\n",max);
   printf("Il numero minimo è %d\n",min);
   return 0;
}
