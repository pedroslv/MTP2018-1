//Pedro Henrique Silva
//11721EEL006

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef
	
	struct dimensoes
	{
		float l;
		
		float p;
		
		float h;
	}
dim_m;

typedef
	
	struct prod
	{
		char nome[200];
		
		float preco;
		
		dim_m dimensoes;
	}
prod_m;

void cadastro(int c, prod_m p[2])
{
	printf("\nNome: ");
	
	fgets(p[c].nome, 64, stdin); 
	p[c].nome[strlen(p[c].nome)-1] = '\0';
	
	printf("\nDigite o valor: ");
	scanf("%f", &p[c].preco);
	getchar();
	
	printf("\nDigite a largura: ");
	scanf("%f", &p[c].dimensoes.l);
	getchar();
	
	printf("\nDigite a profundidade: ");
	scanf("%f", &p[c].dimensoes.p);
	getchar();
	
	printf("\nDigite a altura: ");
	scanf("%f", &p[c].dimensoes.h);
	getchar();
}
int main()
{
	int opt=0, menu=0, i=0;
	
	char aux[64];
	
	prod_m p[2];
	
	for (i=0; i<2; i++)
		
		p[i].nome[0] = '\0';
	
	do
	{
		printf("\nDigite 1 para ... Cadastro\nDigite 2 para ... Consulta\n");
		scanf("%d", &opt);
		getchar();
		
		switch (opt)
		{
			case 1:
				printf("\n1 - Produto 1\n2 - Produto 2\n");
				scanf("%d", &menu);
				getchar();
				
				printf("\nCadastre as informacoes do produto %d: ", menu);
				cadastro(menu-1, p);
				printf("\nProduto %d cadastrado com sucesso", menu);
				
				break;
			case 2:
				printf("\nProduto a ser procurado: ");
				scanf("%d", &menu);
				getchar();
				
				if (strlen(p[menu-1].nome) == 0)
					
					printf("\nProduto nao encontrado!\n");
				
				else
					
					printf("\n%s, R$ %.2f, L: %.2fm x P: %.2fm x A: %.2fm", p[menu-1].nome, p[menu-1].preco, p[menu-1].dimensoes.l, p[menu-1].dimensoes.p, p[menu-1].dimensoes.h);
				
				break;
		}
	}while (opt == 1 || opt == 2);
	
	return 0;
}
