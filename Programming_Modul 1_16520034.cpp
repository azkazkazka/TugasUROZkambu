#include<iostream>
#include<vector>
using namespace std;


int main(){
	int n;
	cin>>n;
	vector<string> a; 
	for (int i=0 ;i<n;i++){
		int year;
		cin>>year;
		if (year%400==0){
			a.push_back("Leap Year");
		}
		else{
			if (year%4==0){
				if (year%100==0){
					a.push_back("Not a Leap Year");
				}
				else{
					a.push_back("Leap Year");
				}
			}
			else{
				a.push_back("Not a Leap Year");
			}
		}
	}
	for (int i=0;i<a.size();i++){
		cout<<a[i];
		if (i==a.size()-1){
			continue;
		}
		cout<<"\n";
	}
	return 0;
}
