#include <iostream>
#include "lib.h";
using namespace std;
int main() {
	int x = 0;
	int y = 0;
	int check = 0;
	int check2 = 0;
	int i = 1;
	while (true) {
		system("cls");
		gotoXY(x, y);
		SetColor(i);
		cout << "I HATE LAP TRINH";
		//hello
		//hello again

		if (_kbhit()) {
			char kitu = _getch();
			if (kitu == 'w') {
				check = 1;
			}
			else if (kitu == 's') {
				check = 0;
			}
			else if (kitu == 'a') {
				check2 = 1;
			}
			else if (kitu == 'd') {
				check2 = 0;
			}
		}
		if (y == 28) {
			check = 1;
			i++;
			if (i > 15) {
				i = 1;
			}
		}
		else if (y == 0) {
			check = 0;
			i++;
			if (i > 15) {
				i = 1;
			}
		}
		if (x == 0) {
			check2 = 0;
			i++;
			if (i > 15) {
				i = 1;
			}
		}
		else if (x == 100) {
			check2 = 1;
			i++;
			if (i > 15) {
				i = 1;
			}
		}
		if (check == 0) {
			y++;
		}
		else if (check == 1) {
			y--;
		}
		if (check2 == 0) {
			x++;
		}
		else if (check2 == 1) {
			x--;
		}
		Sleep(50);
	}
	return 0;
}