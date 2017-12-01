
#include <stdio.h>
 
#define STRSIZE 200
 
int main()
{
	char frase[ STRSIZE ];
	int contador=1, i;

	int flag_simbolo=0;
	char ultimo_caracter;
	
 
	fgets( frase, STRSIZE, stdin );
	
	
	for (i=0; frase[i]!='\0' ; i++)
	{
	  
	  if (frase[i] == '\n')
	    {
		printf("%d\n", contador);
		return 0;
	    }
	  
	  if (frase[i] >=32 && frase[i] <= 47)
	    flag_simbolo=1;
	  
	  else if (flag_simbolo==1 && (!((frase[i]>= 48 && frase[i]<= 57) && (ultimo_caracter==44 || ultimo_caracter == 46 ))))
	  {
	    contador++;
	    flag_simbolo=0;
	  }
	  
	  else
	    flag_simbolo=0;
	  
	  ultimo_caracter=frase[i];
	}
	

	
 
	return 0;
}