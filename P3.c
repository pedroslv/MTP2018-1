//Nome: Pedro Henrique Silva
//Matrícula: 11721EEL006

#include <stdio.h>

void bin(unsigned int num, int len) 
{
	if(len != 0) 
	{
	bin(num/2, len-1);
	printf("%d", (num%2));
	}	
}

void NOT()
{
    int x,res;
    printf("\n\nDigite um numero qualquer: ");
			scanf("%d", &x);
			getchar();
			printf("\nNOT %d", x);
			printf("(");
			bin(x, 32);
			printf(")");
			res=~x;
			printf(" : %d", res);
			printf("(");
			bin(res, 32);
			printf(")");
}
void AND()
{
    int x, y, res;
    printf("\n\nDigite um numero: ");
			scanf("%d", &x);
			getchar();
			printf("\n\nDigite outro numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("(");
			bin(x, 32);
			printf(")");
			printf(" AND %d", y);
			printf("(");
			bin(y, 32);
			printf(")");
			res=x&y;
			printf(" : %d", res);
			printf("(");
			bin(res, 32);
			printf(")");
}
void OR()
{
    int x, y, res;
    printf("\n\nDigite um numero: ");
			scanf("%d", &x);
			getchar();
			printf("\n\nDigite outro numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("(");
			bin(x, 32);
			printf(")");
			printf(" OR %d", y);
			printf("(");
			bin(y, 32);
			printf(")");
			res=x|y;
			printf(" : %d", res);
			printf("(");
			bin(res, 32);
			printf(")");
}
void XOR()
{
    int x, y, res;
    printf("\n\nDigite um numero: ");
			scanf("%d", &x);
			getchar();
			printf("\n\nDigite outro numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("(");
			bin(x, 32);
			printf(")");
			printf(" XOR %d", y);
			printf("(");
			bin(y, 32);
			printf(")");
			res=x^y;
			printf(" : %d", res);
			printf("(");
			bin(res, 32);
			printf(")");
}
void RIGHT()
{
    int x, y, res;
    printf("\n\nDigite um numero: ");
			scanf("%d", &x);
			getchar();
			printf("\n\nDigite outro numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("(");
			bin(x, 32);
			printf(")");
			printf(" >> %d", y);
			printf("(");
			bin(y, 32);
			printf(")");
			res=x>>y;
			printf(" : %d", res);
			printf("(");
			bin(res, 32);
			printf(")");
}
void LEFT()
{
    int x, y, res;
    printf("\n\nDigite um numero: ");
			scanf("%d", &x);
			getchar();
			printf("\n\nDigite outro numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("(");
			bin(x, 32);
			printf(")");
			printf(" << %d", y);
			printf("(");
			bin(y, 32);
			printf(")");
			res=x<<y;
			printf(" : %d", res);
			printf("(");
			bin(res, 32);
			printf(")");
}

int main()
{
	int opt;
	printf("----CALCULADORA BITWISE\n\n");
	printf("1. NOT\n2. AND\n3. OR\n4. XOR\n5. Right Shift\n6. Left Shift");
	printf("\n\nDigite uma opcao: ");
	scanf("%d", &opt);
	switch(opt)
	{
		case 1:
		NOT();
		break;
	
	    case 2:
	    AND();
	    break;
	    
	    case 3:
	    OR();
	    break;
	    
	    case 4:
	    XOR();
	    break;
	    
	    case 5:
	    RIGHT();
	    break;
	    
	    case 6:
	    LEFT();
	    break;
	    
	}
	
	getch();
	return 0;
	
}
