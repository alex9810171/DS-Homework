#include <iostream>
using namespace std;
int Fib_recursive(int n){
	if( n == 0 ) return 0;
	if( n == 1 ) return 1;
	return Fib_recursive( n-1 ) + Fib_recursive( n-2 ); 
}
int Fib_iterative(int n){
	int i,ans=1,tmp1=1,tmp2=1;
	for(i=0;i<n-2;i++){
		ans = tmp1 + tmp2;
		tmp1 = tmp2;
		tmp2 = ans;
	}
	return ans;
	//return the fib using iterative method
}
int main(){
	int n;
	cin >> n;
	cout << Fib_recursive(n) << endl;
	cout << Fib_iterative(n) << endl;
	return 0;
}
