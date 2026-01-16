#include <string.h>
#include <ctype.h>
#include "textupper.h"

char text[80];
int i;

char* textupper(char text[])
{
	for (i=0; i<strlen(text); i++)
		text[i] = toupper(text[i]);
	return text;
}