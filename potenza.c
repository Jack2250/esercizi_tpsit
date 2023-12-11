#include<stdio.h>
int main()
{
	    float a;
	    int c;
	    float f;
	    printf("Inserisci la base: ");
	    scanf("%f", &a);
	    printf("Inserisci l'esponente: ");
	    scanf("%d", &c);
	    
	    f=a;
	    
	    for(int i=1;i<c;i++ ){
	        f=f*a;
	    }
	    printf("La potenza è, %.2f", f);
	    return 0;
	    
	
}
