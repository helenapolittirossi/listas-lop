#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<string.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int m[5][5];
	
	srand(time(NULL));
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			m[i][j] = rand() % 101;
			printf("%3d\t", m[i][j]);
		}
		printf("\n");
	}
	getch();
}