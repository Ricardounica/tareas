#include<stdio.h>
#include<string.h>

void main(){
	char cad[40];
	char str1[40];
	char str2[40];
	int ret;
	printf("--------------------------------------------------------\n");
	printf("\nPrograma que determina si una palabra es un palindromo\n\n");
	printf("--------------------------------------------------------\n");
	
	printf("\nIngrese la palabra: ");
	gets(cad);
	
	printf("Antes de strrev(): %s\n", cad);
	strcpy(str1, cad);
	
	strrev(cad);
	printf("Despues de strrev(): %s\n", cad);
	strcpy(str2, cad);

	ret = strcmp(str1, str2);
	
	if(ret > 0 || ret < 0)
   {
      printf("no es un palindromo\n");
   }
   else 
   {
      printf("es un palindromo\n");
   }
	
	
}