#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(short x, short y);
main(){
	char key=0;
	int i,j;

	int x=5,y=5,dx=1,dy=1;
	int xp=5, yp=20;
	while(key!=27){
		system("cls");
		gotoxy(x,y);
		printf("O");

		x+=dx;
		y+=dy;
		if (x<=1 || x>=80) {
			dx=-dx;
		}
		if (y<=1 || y>25){
			dy=-dy;
		}


		gotoxy(xp, yp);
		printf("__________");

		for(i=1;i<=1000;i++){
			for (j=1;j<=1000;j++){
			}
		}

		if (kbhit()){
			key=getch();
			if (key=='a'){
				xp-=3;
			}
			if (key=='d'){
				xp+=3;
			}
		}
	}
}
void gotoxy(short x, short y)           //definition of gotoxy function//
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
