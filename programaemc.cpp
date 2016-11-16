#include <stdio.h>
#include <stdlib.h>

void equipar(int *status, int *equip);
void inventario();
void desequipar(int *status, int *equip);

int armaduraIniciante[3]={50, 40, 20}, cajadoIniciante[3]={0, 20, 60}, anelIniciante[3]={0, 80, 70}, equip[3];
int status[3]={30, 100, 80}, opcao; // defesa, HP, MP

int main(){
				
			
	do{
		printf("\n Escolha uma opcao: \n 1-Consultar Inventario \n 2-Equipar \n 3-Desequipar \n 4-Sair \n\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				inventario();
				break;
			case 2:
				printf("\n Entre com o numero do equipamento \n 1-Armadura de Iniciante \n 2-Cajado de Iniciante \n 3- Anel de Iniciante \n ");
				scanf("%d", &opcao);
				switch (opcao){
					case 1:
						equipar(status, armaduraIniciante);
						break; 
					case 2:
						equipar(status, cajadoIniciante);
						break;
					case 3:
						equipar(status, anelIniciante);
						break;
				}
				break;
			case 3:
				printf("\n Entre com o numero do equipamento \n 1-Armadura de Iniciante \n 2-Cajado de Iniciante \n 3- Anel de Iniciante \n ");
				scanf("%d", &opcao);
				switch (opcao){
					case 1:
						desequipar(status, armaduraIniciante);
						break; 
					case 2:
						desequipar(status, cajadoIniciante);
						break;
					case 3:
						desequipar(status, anelIniciante);
						break;
					}
				break;
			case 4:
				printf("\n Voce saiu do inventario.");
				break;
			default:
				printf("\n Opcao invalida");		
				
		}
	}while(opcao!=4);  
	
		
	system("pause");
	return 0;
	
}
	
	void inventario(){
		
		int opcao;
		
		do{
					
		printf("\n 1-Armadura de Iniciante \n 2-Cajado de Iniciante \n 3- Anel de Iniciante \n Escolha uma opcao para ver status do equipamento ou 0 para sair. \n ");
		scanf("%d", &opcao);
		
										
		switch(opcao){
			case 1:
				
					
				printf("Defesa: %d \n", armaduraIniciante[0]);
				printf("Hp: %d \n", armaduraIniciante[1]);
				printf("Mp: %d \n", armaduraIniciante[2]);
				
				break;
			case 2:
				printf("Defesa: %d \n",cajadoIniciante[0]);
				printf("Hp: %d \n",cajadoIniciante[1]);
				printf("Mp: %d \n",cajadoIniciante[2]);
				break;
			case 3:
				printf("Defesa: %d \n", anelIniciante[0]);
				printf("Hp: %d \n", anelIniciante[1]);
				printf("Mp: %d \n", anelIniciante[2]);
				
				break;
			case 0:
				printf("Voce saiu do Inventario");
				break;
		}
		

		}while(opcao!=0);
	
	
	
	}
	
	void equipar(int *status, int *equip){
		int i;
		
		for(i=0;i<3;i++){
			status[i] = status[i] + equip[i];
		}
		
		printf("\n\n Seu status atual e: \n");
		
			printf(" Defesa: %d\n ", status[0]);
			printf("HP: %d\n ", status[1]);
			printf("MP: %d\n ", status[2]);
			
					
		

		
	}

	void desequipar(int *status, int *equip){
	
		int i;
		for(i=0;i<3;i++){
			status[i] = status[i] - equip[i];
		}
		
		printf("\n\n Seu status atual e: \n");
		
		printf(" Defesa: %d\n ", status[0]);
		printf("HP: %d\n ", status[1]);
		printf("MP: %d\n ", status[2]);
	}
