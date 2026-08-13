#include <stdio.h>
void main(){
	int caminhao = 18;
	int alqueire = 250;
	int caminhoes, alqueires, viagens, quebrados;
	printf("Digite quantos caminhoes o fazendeiro possui\n");
	scanf("%d", &caminhoes);
	printf("Quantos alqueires o fazendeiro possui?\n");
	scanf("%d", &alqueires);
	viagens = ( alqueires * alqueire ) / ( caminhoes * caminhao);
	quebrados = ( alqueires * alqueire ) % ( caminhoes * caminhao);
	if(quebrados !=0){
		viagens = viagens + 1;
	}
	printf("Sera necessario %d viagens para trasnportar a colheita", viagens);	
	getch();
}