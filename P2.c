//Nome: Pedro Henrique Silva
//Matrícula: 11721EEL006

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int opcao, len;
    char bits[256];
    
    printf("Entre com uma das alternativas abaixo: ");
    
    printf("\n1 - Binario para Decimal");
    printf("\n2 - Binario para Hexadecimal");
    printf("\n3 - Hexadecimal para Decimal");
    printf("\n4 - Hexadecimal para Binario");
    printf("\n5 - Decimal para Binario");
    printf("\n6 - Decimal para Hexadecimal");
    printf ("\n7 - Octal para Decimal");
    printf("\n8 - Decimal para Octal\n\n");

    scanf("%i", &opcao); getchar();
    
    void BinDec()
    {
        int num, binario, decimal = 0, base = 1, resto;
 
    printf("Digite um numero binario\n");
    scanf("%d", &num);
    binario = num;
    while (num > 0)
    {
        resto = num % 10;
        decimal = decimal + resto * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("O valor decimal eh %d \n", decimal);
}

void BinHex()
{
    int binario, hexad = 0, i = 1, resto;
 
    printf("Entre com o numero binario: ");
    scanf("%d", &binario);
    while (binario != 0)
    {
        resto = binario % 10;
        hexad = hexad + resto * i;
        i = i * 2;
        binario = binario / 10;
    }
    printf("O valor em Hexadecimal eh: %X", hexad);
}

void HexDec()
{
    char hex[17];
 long long decimal, place;
 int i = 0, val, len;

 decimal = 0;
 place = 1;
 
 printf("Entre com um numero hexadecimal qualquer: ");
 scanf("%s", hex);

len = strlen(hex);
 len--;

 
 for(i=0; hex[i]!='\0'; i++)
 {
 
 if(hex[i]>='0' && hex[i]<='9')
 {
 val = hex[i] - 48;
 }
 else if(hex[i]>='a' && hex[i]<='f')
 {
 val = hex[i] - 97 + 10;
 }
 else if(hex[i]>='A' && hex[i]<='F')
 {
 val = hex[i] - 65 + 10;
 }

 decimal += val * pow(16, len);
 len--;
 }
 printf("Decimal = %lld", decimal);
}

void HexBin()
{
    char binario[256], hexa[17];
    long int i = 0;
 
    printf("Entre com o valor do hexidecimal ");
    scanf("%s", hexa);
    printf("\nValor binario: ");
}
    
void DecBin()
{
    int binario[1000];

    int i = 0, j, n;
    scanf("%d", &binario);
    while (n > 0) {
 
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    for (j = i - 1; j >= 0; j--)
        printf("%d", binario[j]);
}

    switch(opcao)
    {
        case 1:
        BinDec();
        break;

        case 2:
        BinHex();
        break;
    
        case 3:
        HexDec();
        break;
        
        case 4:
        HexBin();
        break;
        
        case 5:
        DecBin();
        break;
    }
    
    return 0;

}
