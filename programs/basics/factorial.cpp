#include<iostream>
using namespace std;
int main(){
	long double  fact=1, n;
	cout << "Enter the number N: ";
	cin >> n;

	for(int i = 1; i <= n ; i++){
		fact*= i;

	}
	cout<< "factorial of " << n << " is " << fact;
	return 0;



}
