#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void gotoxy (int x, int y);

void gotoxya(int x, int y)
{
    COORD c = { x, y };  
    SetConsoleCursorPosition(  GetStdHandle(STD_OUTPUT_HANDLE) , c);
}

int main(int argc, char *argv[]){

	int milesimaDeSegundo = 10;
	int i;
	int x = 1;
	int xDos = 76;
	
	while(i >= 0 || i <= 122){
		
		for(i = 0; i < 120; i++){

			gotoxya(i, 15);
			printf("+");
			system("cls");

			Sleep(milesimaDeSegundo);
		}
	
		for(i = 121; i > 0; i--){

			gotoxya(i, 15);
			printf("+");
			system("cls");

			Sleep(milesimaDeSegundo);
		}
		
	}
	
}
