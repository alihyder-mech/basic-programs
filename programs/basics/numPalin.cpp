#include<iostream>
using namespace std;
int reverseNum(int n){
	int temp=0;
	while (n != 0) {
		temp = temp*10 + n%10;
		n/=10;
	}
	return temp;

}

int main (){ 
	int n;
       	cout << "Enter a number ";
	cin >> n;
	cout << "paindrome : " << (reverseNum(n) == n);
	return 0;
}	
	
