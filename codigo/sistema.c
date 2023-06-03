#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int codigo_matricula[20];
int codigo_do_livro[] = {1111, 2222, 3333};
int livros_emprest[20][4];
int livro_selecionado;
int j;
char novo_livro;
int cont;
int cont2;
int verificado = 1;
char cargo;
int i, c;
int tamanho;
int novo_empres;
	
int novolivro(){
	printf("Informe o codigo do livro: ");
	scanf(" %d", &livro_selecionado);
	for(j=0; j <= tamanho; j++){
		if(livro_selecionado == codigo_do_livro[j]){
			verificado = 0;
			printf("Livro encontrado [ %d - %d] \n",livro_selecionado, codigo_do_livro[j]);
			livros_emprest[i][cont] = livro_selecionado;

			if (cont2 == 0){
				cont2 = 1;
				cont = 1;
			}
			else if(cont2 == 1){
				cont++;
			}
			else{
				cont++;
			}
		}
		
	}
	
	if(verificado != 0){
		printf("O codigo inserido nao existe\n");
	}
	
	return 0;
}

int main(int argc, char *argv[]) {
	
	
	tamanho = sizeof(codigo_do_livro) / sizeof(codigo_do_livro[0]);
	do{
		
		
		printf("Informe seu codigo de matricula: ");
		scanf("%d", &codigo_matricula[i]);
		
		if(verificado == 0 ||cont2 == 0){
			printf("Informe sua area: [A - Advogado E - Estagiario F - Funcionario]: ");
			scanf(" %c", &cargo);
			
		}
		
		
		novolivro();

		
		
		
		do{
			if(cont >= 4){
			printf("Limite de emprestimo excedido\n");
			break;
			}

			printf("Gostaria de retirar mais um livro? [S/s - SIM]");
			scanf(" %c", &novo_livro);
			if(novo_livro == 'S' || novo_livro == 's'){
				printf("%d \n", cont);
				novolivro();
				
			}
			else{
				break;
			}

		
		}while(novo_livro == 'S' || novo_livro == 's');
		
		printf("Novo emprestimo? [ 0 - SIM] ");
		scanf("%d", &novo_empres);
	
		i++;
		c++;
		cont2 = 0;
	}while(novo_empres == 0);
	

	for(i=0; i<c;i++){
		printf("Matricula: %d\n", codigo_matricula[i]);
		cont++;
		printf("Livros emprestados: ");
		for(j=0;j<4; j++){
			if(livros_emprest[i][j] != 0){
				printf("[ %d ] ", livros_emprest[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;

}	 
