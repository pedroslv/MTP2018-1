//LetC-cia Marques Pinho Tiago - 11721EBI014


#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#define MAX 64

typedef struct Dim 
{
  float l;
  float p;
  float h;
}Dim;

typedef struct prod 
{
  char nome[MAX];
  float preco;
  Dim dim;
}prod;

void cadastrar(prod * x) 
{
  printf("\nNome: ");
  fgets(x-> nome, MAX, stdin);
  x-> nome[strlen(x-> nome) - 1] = '\0';
  
  printf("\nPreco: ");
  scanf("%f", & (x-> preco));
  getchar();
  
  printf("\nLargura: ");
  scanf("%f", & (x-> dim.l));
  getchar();
  
  printf("\nProfundidade: ");
  scanf("%f", & (x-> dim.p));
  getchar();
  
  printf("\nAltura: ");
  scanf("%f", & (x-> dim.h));
  getchar();
}

void consultar(prod * x) 
{
  char charx;
  
  if (strlen(x-> nome) == 0) 
  {
    printf("\nProduto nao cadastrado!\n");
    while ((charx = getchar()) != '\n');
    return;
  }
  
  printf("\n%s, R$ %.2f, L: %.2fm x P: %.2fm x A: %.2fm\n", x-> nome, x-> preco, (x-> dim.l), (x-> dim.p), (x-> dim.h));
  while ((charx = getchar()) != '\n');
}

int main() 
{
  int op = -1, op2 = 0, n = 0, i;
  char charx, fil[MAX];
  FILE * f;
  prod * produtos = (prod * ) calloc(1, sizeof(prod));

  while (op != 0) 
  {
    printf("Produtos em memoria: %d", n);
    printf("\n1 - Consulta\n2 - Cadastro\n3 - Carregar de arquivo para memoria\n4 - Salvar memoria em arquivo\n0 - Sair\n\n");
    scanf("%d", & op);
    getchar();
    
    op2 = -1;
    switch (op) {
    case 1:
      
      while (op2 != 0) {
        if (n == 0) {
          printf("\nNao ha produtos cadastrados!\n");
          while ((charx = getchar()) != '\n');
          break;
        }
        
        printf("\nConsulta\n");
        printf("\nProdutos em memoria: %d", n);
        printf("\n0 = Voltar");
        
        for (i = 0; i < n; i++)
        {  
          printf("\n%d. %s", i + 1, produtos[i].nome);
        }
        
        printf("\n ");
        scanf("%d", & op2);
        getchar();
        
        if (op2 > 0 && op2 <= n)
        {  
          consultar( & produtos[op2 - 1]);
        }
        
        if (op2 < 0 || op2 > n)
        {  
          printf("\nProduto nao existe!\n");
        }
            
                    }
      break;
    
    case 2:
      
      n++;
      produtos = (prod * ) realloc(produtos, n * sizeof(produtos));
      cadastrar( & produtos[n - 1]);
      printf("\nCadastrado!\n");
      while ((charx = getchar()) != '\n');
      
      break;
    
    case 3:
      
      printf("\nNome: ");
      scanf("%s", (char * ) fil);
      getchar();
      
      f = fopen(fil, "rb");
      if (f) {
        fread( & n, sizeof(int), 1, f);
        produtos = (prod * ) calloc(n, sizeof(produtos));
        fread((void * ) produtos, sizeof(produtos), n, f);
        fclose(f);
        
        printf("\nArquivo contem %d produto(s).\n", n);
        while ((charx = getchar()) != '\n');
      } 
      
      else 
      {
        printf("\nO arquivo nao pode ser aberto!\n");
        while ((charx = getchar()) != '\n');
      }
      break;
    
    case 4:
      
      printf("\nNome: ");
      scanf("%s", (char * ) fil);
      getchar();
      f = fopen(fil, "wb");
      
      if (f) 
      {
        fwrite( & n, sizeof(int), 1, f);
        fwrite(produtos, sizeof(produtos), n, f);
        fclose(f);
        
        printf("\nProdutos armazenados em disco com sucesso!!\n");
        while ((charx = getchar()) != '\n');
      } 
      
      else 
      {
        printf("\nO arquivo nao pode ser aberto!\n");
        while ((charx = getchar()) != '\n');
      }
      break;
    
    default:
      if (op != 0)
        printf("\nOpcao invalida!\n");
      break;
    }
  
      
  }
  free(produtos);
  return 0;

    
}
