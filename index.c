#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int vetor[10];
	int quantidade;
	int i;
	int aux;
	int count = 1;
	int aux2[10];
	int condicao;
	
	printf("Digite 1 para adicionar um vetor sem numeros repetidos");
	printf("\n");
	printf("Digite 2 para adicionar um vetor com numeros repetidos");
	scanf("%d",&condicao);
	printf("\n");
	
	switch (condicao){
	case 1:{
		printf("Digite o tamanho do vetor");
		scanf("%d",&quantidade);
		
		for(i = 1; i <= quantidade; i++){
		printf("digite os numeros do vetor");
		scanf("%d",&vetor[i]);
	}
	
	for(i = 1; i <= quantidade; i++){
		//printf("%d",vetor[i]);
	}
		
	for(i = 0; i<=0; i++){
		aux = quantidade - (quantidade/2);
		printf("meio %d ",vetor[aux]);
		printf("\n\n");
		for(i = 1; i <= quantidade; i++){
				printf("\n\n");
					if(aux  > vetor[i] || aux < vetor[i]){
						printf("0");
						break;
					}
					else{
						printf("1");
						break;
					}
		}	
	}	
	break;
	default:{
	printf("Error");
	break;
	}
	
	case 2:{
		printf("Digite o tamanho do vetor");
		scanf("%d",&quantidade);
		
		for(i = 1; i <= quantidade; i++){
		printf("digite os numeros do vetor");
		scanf("%d",&vetor[i]);
	}
	
	for(i = 1; i <= quantidade; i++){
		//printf("%d",vetor[i]);
	}
		
	for(i = 0; i<=0; i++){
		aux = quantidade - (quantidade/2);
		//printf("meio %d ",vetor[aux]);
		
		printf("\n\n");
		
		for(i = 1; i <= quantidade; i++){
				printf("\n\n");
					if(aux  >= vetor[i]){
						printf("0");
						break;
					}
					else{
						printf("1");
						break;
					}
			}
				}
				break;
			}
					return 0;
				}
			}
	}
