#include <iostream>
using namespace std;
int summation(int n){
	if(n==1){
		return 1;
	}
	return n+summation(n-1); 
	//return the sum 1+ 2+ 3+ ...+ n using recursive method
}
int main(){
	int n;
	cin >> n;
	cout << summation(n);
	return 0;
}
