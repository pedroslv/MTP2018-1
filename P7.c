//Aluno: Pedro Henrique Silva
//Matricula: 11721EEL006

#include<stdio.h>

int func(int m, int n) {
	
	if(m==0)
		
		return n+1;
	
	else if(n==0)
		
		return func(m-1, 1);
	
	else
		
		return func(m-1, func(m, n-1));
}

int main(){
	
	int m, n;
	
	printf("Digite os valores de m e n");
	
	scanf("%i %i", &m, &n);
	
	getchar();
	
	printf("%i", func(m,n));	

	return 0;
}
