/*
 * Part 0: Basic syntax
 *
 * to compile, run:
 * gcc -o 0_basic 0_basic.c
 *
 * to compile with all warnings enabled, run
 * gcc -Wall -o 0_basic 0_basic.c minha_bib.c
 *
 */


#define LIM 20

#include <stdio.h>
#include "minha_bib.h"  // <-- isso é um header customizado

int sum(int a, int b){
	int c = a + b;
	//      a * b    multiplicação
	//      a / b    divisão (em inteiros)
	//      a - b    subtração
	//      a ** b   potência (a elevado a b)
	if ( c == LIM ){
		return LIM;
	} else {
	    if ( c > LIM ){ // >= maior ou igual
			    // <= menor ou igual
			    // != diferente
			    // 0 é falso,
			    // != 0 é verdadeiro
		return c;
	    }
	}
	return 0;
}

void faz_soma(int a, int b){
	a + b;
	// essa função não retorna nada
}

// Função principal
// O fluxo do código começa aqui
int main(){

	
	// Variaveis
	int c;
	int a, b;
	a = 10;
	b = 3;
	c = a + b; // c == 13
	/* a * b    multiplicação
	   a / b    divisão (em inteiros)
	   a - b    subtração
	   a % b   resto de a por b*/
	// Comentarios ^^^^^^^^^^
	

	float f = 22.0/7.0;
	printf("exemplo de float: %f\n", f);

	char ch = '?'; // a var ch não mudará de valor
	printf("exemplo de char: %c\n", ch);

	const char co = 'Q';
	static char cj = 'R';



	/*bool b = 0;
	if ( b ){
	    printf("Esse print nao sera feito");
	}*/


	int s;    // <----- ponto e virgula
	int entrada;

	printf("digite um numero: "); //imprime uma string na tela
	scanf("%d",&entrada); // espera por uma entrada que termine com enter


	s = sum(entrada,10);
	printf("voce digitou %d\n", s);
	

	int x = 101;
	while(x>0){
		printf("%d ", x);
		x--; // x = x - 1  equivalente a x-=1;
	}

	for ( int i = 0; i < 10 ; i++)
		printf("%d\n", i%2);

        switch (x) {
	    case 0:
		    printf("x==0\n");
		    break;;
	    case 1:
		    printf("x==1\n");
	    case 2:
		    printf("x==1 ou x==2\n");
		    ;;
	    default:
		    printf("caso base\n");
	
	}

        imprimeOi();	
	return 0;
}
