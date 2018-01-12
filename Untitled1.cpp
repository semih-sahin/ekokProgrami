#include <iostream>
#include <conio.h>
using namespace std;

int ekok(int a, int b);

int main(){
	int sayi1, sayi2;
	A10:;
	cout << "pozitif tam sayi girin: ";
	cin >> sayi1;
	cout << "pozitif tam sayi girin(2): ";
	cin >> sayi2;
	if (sayi1<=0 || sayi2<=0){
		cout << "\nPOZITIF TAMSAYI GIRINIZ!!!\n";
		goto A10;
	}
	cout << "EKOK(" << sayi1 << "," << sayi2 << ") = " << ekok(sayi1,sayi2) << endl;
	getch();
	return 0;
}

int ekok(int a, int b){
	int temp, carpim;
	carpim=a*b;
	if (a>b){
		A20:
		temp=a;
		while(temp<=carpim){
			if(temp%a==0 && temp%b==0){
				return temp;
			}
			temp++;
		}
	}else{
		temp=a;
		a=b;
		b=temp;
		goto A20;
	}
}
