#include<stdio.h>


int rangoprimo(int num, int numlim);


int main(){

int n,nlim;
printf("--------------------------------------------------------------------------------");
printf("Programa que muestra la cantidad de numeros primos que hay en determinado rango");
printf("--------------------------------------------------------------------------------\n");
printf("Desde el numero: \t");
scanf("%d",&n);

printf("Hasta el numero: \t");
scanf("%d",&nlim);

	printf("\nLos numeros primos que existen desde el numero %d hasta el numero %d son: %d\n",n,nlim,rangoprimo(n, nlim));
	return 0;


}

int rangoprimo(int num, int numlim){
	int prm;
	int contador=0;
	int div, r;
	for (num;num<=numlim;num++)
	{
		for(div=2;div<num;div++)
		{
			prm=1;
			r=num%div;
			if(r==0)
			{
				prm=0;
				break;
			}
		}
		if(prm !=0) 
		{	
		/*printf("%d",num);*/
		contador=contador+1;
		}
	}
	
	return contador;
}