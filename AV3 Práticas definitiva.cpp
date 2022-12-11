#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int escolha, mes[12], i, encerrar=0, escolha2, mes2[12];
	
	for (int cont2 = 1; cont2 <= 12; cont2++){
		mes[cont2] = 0;
		mes2[cont2] = 0;
	}

	do{
		
		printf("\n------------------------------------------------\n");
		printf("Digite uma da opcoes abaixo\n");
		printf("1 - Registro de Chamados Recebidos e Atendidos\n");
		printf("2 - Exibir Chamados Recebidos e Atendidos");
		printf("\n------------------------------------------------\n");
		scanf(" %d", &escolha);
		
		if(escolha == 1){
			
			printf("\nDeseja registrar todos os meses ou registrar algum mês especifico ?\n");
			printf("Registrar todos os meses(1)\nRegistrar algum mês especifico(2)\n");
			scanf("%d", &escolha2);
			if (escolha2 == 1){
				for(int g = 1; g <= 12; g++){
					printf("Mês %d", g);
					printf("\nDigite o número de chamados recebidos, e sequencialmente os chamados atendidos:\n");
					scanf(" %d", &mes[g]);
					scanf(" %d", &mes2[g]);	
				}
			}
			else{
			
				printf("\nDigite o mês no qual deseja inserir os dados:\n");
				scanf(" %d", &i);
	
				printf("\nDigite o número de chamados recebidos, e sequencialmente os chamados atendidos:\n");
				scanf(" %d", &mes[i]);
				scanf(" %d", &mes2[i]);
			}
			printf("\nSe deseja continuar digite 1, senao digite 2 para encerrar o programa:\n");
			scanf(" %d", &encerrar);
		}
 	
		if(escolha == 2){
			printf("\nDigite o numero 0 se quiser ver os dados referentes a todos os meses\n");
			printf("ou digite um número de 1 a 12 para ver os dados de um mes especifico:\n");
			scanf(" %d", &i);
			if(i == 0){
			
				printf("------------------------------------------");
				printf("\nJaneiro\n");
				printf("\nNumero de Chamados Recebidos: %d\n", mes[1]);
				printf("\nNumero de chamados atendidos: %d\n", mes2[1]);
				printf("------------------------------------------");
				printf("\nFevereiro\n");
				printf("\nNumero de Chamados Recebidos: %d\n", mes[2]);
				printf("\nNumero de chamados atendidos: %d\n", mes2[2]);
				printf("------------------------------------------");
				printf("\nMarço\n");
				printf("\nNumero de Chamados Recebidos: %d\n", mes[3]);
				printf("\nNumero de chamados atendidos: %d\n", mes2[3]);
				printf("------------------------------------------");
				printf("\nAbril\n");
				printf("\nNumero de Chamados Recebidos: %d\n", mes[4]);
				printf("\nNumero de chamados atendidos: %d\n", mes2[4]);
				printf("------------------------------------------");
				printf("\nMaio\n");
				printf("\nNumero de Chamados Recebidos: %d\n", mes[5]);
				printf("\nNumero de chamados atendidos: %d\n", mes2[5]);
				printf("------------------------------------------");
				printf("\nJunho\n");
				printf("\nNumero de Chamados Recebidos: %d\n", mes[6]);
				printf("\nNumero de chamados atendidos: %d\n", mes2[6]);
				printf("------------------------------------------");
				printf("\nJulho\n");
				printf("\nNumero de Chamados Recebidos: %d\n", mes[7]);
				printf("\nNumero de chamados atendidos: %d\n", mes2[7]);
				printf("------------------------------------------");
				printf("\nAgosto\n");
				printf("\nNumero de Chamados Recebidos: %d\n", mes[8]);
				printf("\nNumero de chamados atendidos: %d\n", mes2[8]);
				printf("------------------------------------------");
				printf("\nSetembro\n");
				printf("\nNumero de Chamados Recebidos: %d\n", mes[9]);
				printf("\nNumero de chamados atendidos: %d\n", mes2[9]);
				printf("------------------------------------------");
				printf("\nOutubro\n");
				printf("\nNumero de Chamados Recebidos: %d\n", mes[10]);
				printf("\nNumero de chamados atendidos: %d\n", mes2[10]);
				printf("------------------------------------------");
				printf("\nNovembro\n");
				printf("\nNumero de Chamados Recebidos: %d\n", mes[11]);
				printf("\nNumero de chamados atendidos: %d\n", mes2[11]);
				printf("------------------------------------------");
				printf("\nDezembro\n");
				printf("\nNumero de Chamados Recebidos: %d\n", mes[12]);
				printf("\nNumero de chamados atendidos: %d\n", mes2[12]);
				printf("------------------------------------------");
				}	
			
			if(i >= 1 && i <= 12){
					printf("\nNúmero de Chamados Recebidos: %d\n", mes[i]);
					printf("\nNúmero de chamados atendidos: %d\n", mes2[i]);
				}
			printf("\nSe deseja continuar digite 1, senão digite 2 para encerrar o programa:\n");
			scanf(" %d", &encerrar);
			}
			system("cls");
			}while(encerrar==1);
			
	return 0;
}
