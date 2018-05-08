//Nome: Pedro Henrique Silva
//Matrícula: 11721EEL006
#include <stdio.h>

int main()
{
	int i=0, num=0;
	char numstring[256];
	printf("Digite um numero qualquer: ");
	scanf("%s", numstring);
	getchar();
	
	while(numstring[i])
	{
		if(numstring[i]>=48 && numstring[i]<=57)
		{
			numstring[i]=numstring[i]-'0';
			num=num*10+numstring[i];
		}
		i++;
	}
	printf("\nO seu numero, em inteiro, eh: %d", num);
	
	getch();
	
	return 0;
}