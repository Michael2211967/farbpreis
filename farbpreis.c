/* farbpreis.c */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

float kiloprice;
float kiloquantity;
float length;
float width;
float area;
float quantity;
float price;
char answer[10];
int i;

int main()
{	
	printf("\nPreis je Kilo Farbe eingeben: ");
	scanf("%f", &kiloprice);
	printf("Kilo je Quadratmeter eingeben: ");
	scanf("%f", &kiloquantity);
	do
	{
		printf("\nLänge eingeben: ");
		scanf("%f", &length);
		printf("Breite eingeben: ");
		scanf("%f", &width);
		area = length * width;
		quantity = area * kiloquantity;
		price = quantity * kiloprice;
		printf("\nFür die Fläche von %.2f qm\n", area);
		printf("werden %.2f Kilo Farbe benötigt.\n", quantity);
		printf("Der Preis für diese %.2f kg Farbe beträgt %.2f EUR.\n", quantity, price);
		printf("\nWollen Sie noch eine neue Fläche berechnen? ");
		scanf("%s", answer);
		for (i=0; i<=strlen(answer); i++)
		{
			answer[i] = toupper(answer[i]);
		}
	} while (strcmp(answer, "JA") == 0);
	puts("\nAuf Wiedersehen\n");
}
