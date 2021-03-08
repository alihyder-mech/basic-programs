#include<iostream>
using namespace std;

int gcd(int m, int n){
	int temp;
	while(m%n != 0){
	 	
		temp = m;
		m = n;
		n = temp%n;
	}
	return n;


}
int main(){
	int m,n, temp;
	cout << "Enter two numbers: ";
	cin >> m >> n;
	cout << "Gcd of given numbers is "<< gcd(m,n);
	return 0;
}
