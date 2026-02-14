/* farbpreis.c */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "upper.h"
#include "tools.h"

int main()
{	
	float kiloprice;
	float kiloquantity;
	float tax_rate;
	float length;
	float width;
	float area;
	float quantity;
	float price;
	float tax;
	char answer[10];

	kiloprice = getSafeFloat("Preis je Kilo Farbe: ");
	kiloquantity = getSafeFloat("Kilo je Quadratmeter: ");
	tax_rate = getSafeFloat("Mehrwertsteuersatz: ");
	if (tax_rate == 0) 
		tax_rate = 19;
	do
	{
		length = getSafeFloat("\nLänge: ");
		width = getSafeFloat("Breite: ");
		area = length * width;
		quantity = area * kiloquantity;
		price = quantity * kiloprice;
		tax = price * tax_rate / 100;
		printf("\nFür die Fläche von %.2f qm\n", area);
		printf("werden %.2f Kilo Farbe benötigt.\n", quantity);
		printf("Der Preis für diese %.2f kg Farbe beträgt %.2f EUR.\n", quantity, price);
		printf("Die Mehrwertsteuer Für Diese %.2f EUR beträgt %.2f EUR.\n", price, tax);
		printf("\nWollen Sie noch eine neue Fläche berechnen? ");
		scanf("%10s", answer);
		m_upper(answer);
	} while (strcmp(answer, "JA") == 0 || answer[0] == 'J');
	puts("\nAuf Wiedersehen");
}
