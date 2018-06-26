//Nome: Pedro Henrique Silva
//Matricula: 11721EEL006

#include<stdio.h>
#include<stdlib.h>

void nums(float * vet, int tam)
{
	int i;
	float num;

	for(i = 0; i < tam; i++)
	{
	
	vet[i] = (float) rand()/(float) RAND_MAX + 0.5f;
	
	}

}


float diminui(float * begin, float * end, float (*func)(float, float)) 
{

	return (begin == end? 1 : (*func)(*begin, diminui(begin+1, end, func)));

}


float adic(float a, float b)
{

	return a+b;

}

float multi(float a, float b)
{

	return a*b;

}


int main()
{
	srand(123456);
	float vet[100];
	int c;

	nums(vet, 100);
	
	printf("Escolha o que deseja: \n\n1.Soma\n\n\n2.Produto\n\n\n");
	scanf("%d", &c);
	getchar();

	if(c == 1)
	{
	
		printf("%f\n", diminui(vet, vet+100, adic)-1);

	}

	else if(c == 2)
	{

		printf("%f\n", diminui(vet, vet+100, multi));

	}

	return 0;

}
