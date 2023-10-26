// https://www.youtube.com/watch?v=CYvJPra7Ebk
// https://www.youtube.com/watch?v=KFKxlYNfT_o

#include <stdio.h>
#include <stdlib.h>



void nice (int * ponteiro){
	*ponteiro = 101;
}



int main (){
   /*
    * Arrays
    */
    int fib[100];
    for (int j=0;j<100;j++)
	    fib[j] = j*j;
    
    for (int j=0;j<100;j++) printf("%d ",fib[j]); 
    
    char name[6] = { '_', 'A', 'C', 'P', 'I', '\0' };
    
    for (int i = 0;i<6;i++)
	    printf("%c",name[i]);
    printf("\n");

   /*
    * Ponteiros
    */

    int c = 420;

    int* p; // p é um ponteiro de tipo inteiro
    
    p = &c; // p contém o endereço de c;

    printf("endereço que esta em p: %p \n",p);
    printf("conteudo apontado por p: %d \n",*p);
    nice(p); 
    printf("eita, p mudou: %d \n",*p);
    printf("ponteiros tambem tem endereco: %p \n",&p);
    char* outro_nome = "abc";
    printf("%s",outro_nome);


    // Alocação dinamica de memoria
    int s;
    printf("digite um numero: ");
    scanf("%d",&s);


    int* nome = malloc(s*sizeof(int));
    for (int j=0;j<s;j++) nome[j] = j*j;

    for (int j=0;j<s;j++) printf("%d ",nome[j]); 
    printf("\n");

    /*
     * struct 
     */

    struct acpi {
        int a;
	int b;
	char c;
	float d;
    };

    struct acpi jose = {
	    .a = 1,
	    .b = 3,
	    .c = 'c',
	    .d = 9.8,
    };
    printf("valor a: %d\n",jose.a);
    printf("endereco a: %p\n",&jose.a);
    printf("endereco b: %p\n",&jose.b);
    printf("endereco c: %p\n",&jose.c);
    printf("endereco d: %p\n",&jose.d);


}
