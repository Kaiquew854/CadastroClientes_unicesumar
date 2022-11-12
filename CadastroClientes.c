#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct contatos
{
	char nome[50];
	char tel[50];
	char email[50];
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	struct contatos lista[5];
	int op;
	int cod=1;
	int i;
	int vaz=0;

	

do
{
	printf("1-Cadastrar novo cliente\n2-clientes cadastrados\n0-sair\n");
	scanf("%d", &op);
	fflush(stdin);
	switch(op)
	{
			case 1:
				if(cod<=5)
				{	
					system("cls");
					printf("-------novo cliente-------\n");
			
					printf("\ncodigo...........: %d\n", cod);
					printf("\nInsira o nome....: ");
					fgets(lista[cod].nome, 50, stdin);
					fflush(stdin);
					
					printf("\nInsira o telefone: ");
					fgets(lista[cod].tel, 50, stdin);
					fflush(stdin);
					
					printf("\nInsira o e-mail...: ");
					fgets(lista[cod].email, 50, stdin);
					fflush(stdin);
					cod++;
					vaz++;
					system("cls");
				}
				else
				{
					system("cls");
					printf("Agenda lotada!\n");
					system("pause");
					system("cls");	
				}
			break;
		case 2: 
			system("cls");
			printf("---------cadastros realizados---------\n");
			if(vaz>0)
			{	
				system("cls");
				for(i=1;i<cod;i++)
				{
					printf("\ncodigo..:   %d", i);
					printf("\n\nnome....:   %s", lista[i].nome);
					printf("\ntelefone:   %s\n", lista[i].tel);
					printf("\ne-mail...:  %s", lista[i].email);
					printf("\n-----------------//-------------------\n");
				
				}
				system("pause");
				system("cls");
			}
			else
			{
				system("cls");
				printf("---------cadastros realizados---------\n");
				printf("\nAgenda vazia!\n");
				system("pause");
				system("cls");
			
			}
			
			break;
		case 0:
			break;
		default:
			printf("opcao invalida!\n");
			system("pause");
			system("cls");
			break;
	}
			

}while(op!=0);
	
	return(0);	
}
