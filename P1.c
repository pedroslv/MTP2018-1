//Pedro Henrique Silva
//Matricula:11721EEL006

#include <stdio.h>
  
int
main () 
{
  
int estado = 0, i = 0;
  
char bits[256];
  
 
printf ("Entre com os codigos (apenas 0s e 1s): ");
  
scanf ("%s", &bits[i]);
  
 
 
while (bits[i] != '\0')
    {
      
 
if (bits[i] != '0' && bits[i] != '1')
	{
	  
printf ("Caracteres invalidos!");
	  
return 1;
	
}
      
 
if (estado == 0 && bits[i] == '0')
	{
	  
estado = 0;
	
}
      else if (estado == 0 && bits[i] == '1')
	{
	  
estado = 1;
	
}
      else if (estado == 1 && bits[i] == '0')
	{
	  
estado = 2;
	
}
      else if (estado == 2 && bits[i] == '1')
	{
	  
estado = estado;
	
}
      else if (estado == 2 && bits[i] == '0')
	{
	  
estado = 1;
	
}
      else if (estado == 1 && bits[i] == '1')
	{
	  
estado = 0;
	
}
      else
	{
	  
estado = estado;
	
}
      
i++;
    
}
  
 
printf ("%d", estado);
  
 
return 0;

}
