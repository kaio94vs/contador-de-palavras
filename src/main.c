
/* Kaio Vieira dos Santos
 * RA: 156072
 *	Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
*/

#include <stdio.h>

int main() 
{	
	int contador_de_palavras = 1; //contador de palavras	
	int flag = 0; //flag para simbolos e espaços
	char ultimo_caracter, caracter;
	
	
	
    while (1) //ler caracter por caracter ateh que saia do ciclo infinito
	{
	  scanf("%c", &caracter);
		
	  //verifica se acabou a frase
	  if (caracter == '\n')
	    {
		printf("%d\n", contador_de_palavras);
		return 0;
	    }
		//verifica se eh um simbolo da tabela ASCII
	  if (caracter > 31 && caracter < 48)
	    { 
   		flag = 1;
	     }
		
	  //verificar se é uma palavra para contagem
	  else 
	    if (flag == 1 && (!((caracter > 47 && caracter < 58) && (ultimo_caracter == 44 || ultimo_caracter == 46))))
	      {
		contador_de_palavras = contador_de_palavras + 1;
		flag = 0;
	      }
		
	  //para nao contar os decimais mais de uma vez
	  else
	    {
		flag = 0;
	    }
	
	
	ultimo_caracter = caracter;	 
	}
}

