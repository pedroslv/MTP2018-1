//Aluno: Pedro Henrique Silva
//Matricula: 11721EEL006

#include<stdio.h>

int soma(int *p1, int *p2) 
{
	
	return (*p2) + ((p2 == p1) ? 0 : soma(p1, p2-1));
	
}

int main()

{
	
	int tanto;
	
	printf("Informe a quantidade de valores: ");
	
	scanf("%i", &tanto);
	
	getchar();
	
	int i, num[tanto];
	
	printf("\nInforme os valores:\n");
	
	for(i=0; i<tanto; i++)
	{
		scanf("%i", &num[i]);
		
    getchar();
	}
	
	int *first = num, *last = num+tanto-1;
	
	printf("\nmedia = %f\n", (float) soma(first, last)/tanto);
	
	return 0;
}
