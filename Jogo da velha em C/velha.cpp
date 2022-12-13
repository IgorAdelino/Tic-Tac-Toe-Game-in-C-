#include <stdio.h>

int main(){
	
	char primeiralinha[3]= {},segundalinha[3] = {},terceiralinha[3] = {};
	int contador=0, i=0;
	int coluna, linha;
	char palpite,resposta; 
	int escolha, verificador;
	float resto,errolinha[9], errocoluna[9];
	int verificacaocoluna,verificacaolinha, verificacao;
	
	do{
		coluna=0;
		linha=0;
		primeiralinha[1]={};
		primeiralinha[2]={};
		primeiralinha[3]={};
		segundalinha[1]={};
		segundalinha[2]={};
		segundalinha[3]={};
		terceiralinha[1]={};
		terceiralinha[2]={};
		terceiralinha[3]={};
		contador=0;
		verificacao=0;
	
		printf("Digite 1 para X e 2 para O: \n");
		scanf("%d.\n", &escolha);

		if(escolha==1){
			palpite='X';
		}
		else if(escolha==2){
			palpite='O';
		}
		else{
			while(escolha!=1 && escolha!=2){
		
		printf("Valor invalido.\nDigite 1 para X e 2 para O: \n");
		scanf("%d.\n", &escolha);	
			}
		}
		if(escolha==1){
		palpite='X';
	}
		else if(escolha==2){
			palpite='O';
	}	
	while(contador<10){
	
		printf(" %c | %c | %c \n %c | %c | %c \n %c | %c | %c \n\n",primeiralinha[1],primeiralinha[2],primeiralinha[3],segundalinha[1],segundalinha[2],segundalinha[3],terceiralinha[1],terceiralinha[2],terceiralinha[3]);
			if(contador==9){
			printf("Deu velha!");
			break;
		}
		if(escolha==1 || escolha==2){
		
			if(primeiralinha[1]=='X' && primeiralinha[2]=='X' && primeiralinha[3]=='X'){
				printf("\nJogador X Venceu\n");
				break;
		}
			if(segundalinha[1]=='X' && segundalinha[2]=='X' && segundalinha[3]=='X'){
				printf("\nJogador X Venceu\n");
				break;
		}
			if(terceiralinha[1]=='X' && terceiralinha[2]=='X' && terceiralinha[3]=='X'){
				printf("\nJogador X Venceu\n");
				break;
		}
			if(primeiralinha[1]=='X' && segundalinha[1]=='X' && terceiralinha[1]=='X'){
				printf("\nJogador X Venceu\n");
				break;
		}
			if(primeiralinha[2]=='X' && segundalinha[2]=='X' && terceiralinha[2]=='X'){
				printf("\nJogador X Venceu\n");
				break;
		}
			if(primeiralinha[3]=='X' && segundalinha[3]=='X' && terceiralinha[3]=='X'){
				printf("\nJogador X Venceu\n");
				break;
		}
			if(primeiralinha[1]=='X' && segundalinha[2]=='X' && terceiralinha[3]=='X'){
				printf("\nJogador X Venceu\n");
				break;
		}
			if(primeiralinha[3]=='X' && segundalinha[2]=='X' && terceiralinha[1]=='X'){
				printf("\nJogador X Venceu\n");
				break;
		}
		
		
		if(primeiralinha[1]=='O' && primeiralinha[2]=='O' && primeiralinha[3]=='O'){
			printf("\nJogador O Venceu\n");
			break;
		}
		if(segundalinha[1]=='O' && segundalinha[2]=='O' && segundalinha[3]=='O'){
			printf("\nJogador O Venceu\n");
			break;
		}
		if(terceiralinha[1]=='O' && terceiralinha[2]=='O' && terceiralinha[3]=='O'){
			printf("\nJogador O Venceu\n");
			break;
		}
		if(primeiralinha[1]=='O' && segundalinha[1]=='O' && terceiralinha[1]=='O'){
			printf("\nJogador O Venceu\n");
			break;
		}
		if(primeiralinha[2]=='O' && segundalinha[2]=='O' && terceiralinha[2]=='O'){
			printf("\nJogador O Venceu\n");
			break;
		}
		if(primeiralinha[3]=='O' && segundalinha[3]=='O' && terceiralinha[3]=='O'){
			printf("\nJogador O Venceu\n");
			break;
		}
		if(primeiralinha[1]=='O' && segundalinha[2]=='O' && terceiralinha[3]=='O'){
			printf("\nJogador O Venceu\n");
			break;
		}
		if(primeiralinha[3]=='O' && segundalinha[2]=='O' && terceiralinha[1]=='O'){
			printf("\nJogador O Venceu\n");
			break;
		}
	}
	
		if(contador==9){
			printf("\nDeu velha!");
			break;
		}
		
		for(i=1;i<contador;i++){
			if(errocoluna[i]==verificacaocoluna && errolinha[i]==verificacaolinha){
					verificacao=50;	
			}
						
		}
		if(verificacao==50){
			if(escolha==1){
				if(resto==0){
					palpite='O';
					printf("Jogador X voce trapaceou e perdeu!");
				}	
				if(resto!=0){
					palpite='X';
					printf("Jogador O voce trapaceou e perdeu");
				
				}
			}
				if(escolha==2){
					if(resto!=0){
						palpite='O';
						printf("Jogador O voce trapaceou e perdeu");
						
					}
					if(resto==0){
						palpite='X';
						printf("Jogador X voce trapaceou e perdeu!");
						
					}
				}
			break;
		}
		verificacao=0;
		verificacaolinha=0;
		verificacaocoluna=0;
		errocoluna[contador]=coluna;
		errolinha[contador]=linha;
		
		printf("Digite uma coluna: ");
		scanf("%d.\n", &coluna);
		printf("Digite uma linha: ");
		scanf("%d.\n", &linha);
			
		if(coluna>0 && coluna<4 && linha>0 && linha<4){	
		verificacaolinha=linha;
		verificacaocoluna=coluna;		
	
		if(linha==1){
			primeiralinha[coluna]= palpite;
			
		}
		if(linha==2){
			segundalinha[coluna]= palpite;
			
		}
		if(linha==3){
			terceiralinha[coluna]= palpite;
			
		}
	}else{
		printf("Posicao invalida, tente novamente.\n\n");
		contador--;
	}		
		resto=contador%2;
		if(escolha==1){
			if(resto==0){
				palpite='O';
			}
			if(resto!=0){
				palpite='X';
			}
		}
		if(escolha==2){
			if(resto!=0){
				palpite='O';
			}
			if(resto==0){
				palpite='X';
			}
		}	
		contador++;
}
	printf("\nSe deseja jogar novamente digite S \n");
	scanf("%s.\n", &resposta);
	} while(resposta=='S' || resposta=='s');
	printf("\nObrigado!");
	
	return 0;			
}

