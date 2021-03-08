#include<iostream>
using namespace std;
int main(){
	int  n, newN = 0;
	cout<< "Enter a number ";
       	cin >> n;	

	while(n != 0){
		newN = 10*newN+n%10;
		n/=10;
	}
	cout << "The reverse of given  number is " << newN;
	return 0;

}
