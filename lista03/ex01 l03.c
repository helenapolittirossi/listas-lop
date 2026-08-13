#include <stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	for(int i = 1; i <= 10; i++){
		printf("%d° Colocado\n",i);
	}
	getch();
}