#include <iostream>
using namespace std;

int main (){
	int par, x;
	cin >> par;
	string arr[par];
	for(int i = 0 ; i < par; i++){
		cin >> x;
		if ((x%4 == 0 && x%100 != 0) || (x%400 == 0)) arr[i] = "Leap Year";
		else arr[i] = "Not a Leap Year";
		}
		for (int i = 0; i < par ; i++){
			cout << arr[i];
			cout << endl;
		}
	}
