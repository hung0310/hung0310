include<iostream>
using namespace std;
#include"console.h"
#include<conio.h>
#include<iomanip>
#define MAUNEN 229
#define MAUCHU 15

typedef char str[31];

str thaotac[5] = { "THAO TAC 1","THAO TAC 1", "THAO TAC 1","THAO TAC 1", "THAO TAC 1" };
int menu(str thaotac[5], int n) {
	int tt = 0;//bien chi ra dang o thao tac nao
	int* mau = new int[n];
	for (int i = 1; i <= n; i++) {
		mau[i] = MAUCHU;
		mau[0] = MAUNEN;// dang o thao tca thu nhat
	}
	//TextColor(0);
	int count = 1;
	while (10) {
		clrscr();
		for (int i = 0; i < n; i++) {
			TextColor(mau[i]);
			cout << "\t\t\t\t\t\t\t" << i + 1 << "." << thaotac[i] << endl;


		}
		char c = _getch();
		if ((int)c == -32) c = _getch();
		switch ((int)c) {
		case 72:
			if (tt == 0) {
				count = 1;
			}
			else {
				tt--;
				count--;
			}
			break;
		case 80:
			if (tt == n - 1) {
				count = 5;
			}				
			else {
				tt++;
				count++;
			}
			break;
		case 13:
			if (count == 1) cout << "1";
			if (count == 2) cout << "2";
			if (count == 3) cout << "3";
			if (count == 4) cout << "4";
			if (count == 5) cout << "5";
			return tt;
		}

		for (int i = 0; i < n; i++)
			mau[i] = MAUCHU;
		mau[tt] = MAUNEN;

	}
}



int main() {
	menu(thaotac, 5);
	system("pause");

	return 0;
}
