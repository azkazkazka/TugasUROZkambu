#include <iostream>
using namespace std;

float func(float x){
	cout << "testa" << endl;
	return (x+77)/7;
}
// mantap

float kalku(float a, float b, char op){
	float hasil = 0;
	switch(op){
		case('+'):
			hasil = a + b;
			break;
		case('-'):
			hasil = a - b;
			break;
		case('*'):
			hasil = a * b;
			break;
		case('/'):
			hasil = a/b;
			break;
		case('^'):
			hasil = 1;
			for(int i=0; i<b; i++){
				hasil *= a;
			}
			break;
		case('&'):
			float panjang = (b-a)/100;
			for(int i=0; i < 100; i++){
				hasil += ((func(a+(i*panjang)) + func(a+(i*panjang)+panjang))*panjang/2);
				}
			break;
		}
	return hasil;	
}

int main (){
	float a;
	float b;
	char op;
	string mshmogk;
	cout << "Hai! Yuk cobain kalku aku!";
	cout << endl;
	while(true){
		cout << "Masukkan angka pertama: ";
		cin >> a;
		cout << endl;
		cout << "Masukkan angka kedua: ";
		cin >> b;
		cout << endl;
		cout << "Masukkan operan: ";
		cin >> op;
		cout << kalku(a, b, op) << endl;
		cout << "Masih mo gk? :V (kalo mau tulis :V, kalo ga tulis :'V')" << endl;
		cin >> mshmogk;
		if (mshmogk == ":'V") break;
	}
}
	
