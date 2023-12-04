#include<stdio.h>
int main()
{
	float iva = 0.21, capacita = 1.5, costoLitro = 1,litriAcquistati,prezzoTotale,prezzoIva, prezzoTotaleConIva; //Dichiarazione e inizializzazione variabili
	int bottiglione;
	printf("Inserisci il numero dei bottiglioni");
	scanf("%d",&bottiglione);  //Stampa il numero dei bottiglioni acquistati
    
	litriAcquistati = bottiglione*capacita;  //calcolo i litri acquistati dall'utente
	prezzoTotale = costoLitro*litriAcquistati;  //calcolo il prezzo totale
	prezzoIva = prezzoTotale*iva; //Calcolo l'iva applicata ai bottiglioni
	prezzoTotaleConIva = prezzoTotale+prezzoIva;  //Calcolo il prezzo totale con iva
    
	printf("i litri che hai acquistato sono: %f \n", litriAcquistati);  //Scontrino finale
	printf("Hai pagato: %.2f \n", prezzoTotale);
	printf("In totale hai pagato: %.2f \n", prezzoTotaleConIva);
}
