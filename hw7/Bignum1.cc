#include <iostream>
using namespace std;
int main(){
	int number = 0, fNumList[91][20], appear = 0, carry = 0;
	fNumList[1][0] = 1;
	for(int i = 2;i < 91;i ++)
		for(int j = 0;j < 20;j ++){
			fNumList[i][j] = fNumList[i - 2][j] + fNumList[i - 1][j] + carry;
			if(fNumList[i][j] > 9){
				carry = fNumList[i][j] / 10;
				fNumList[i][j] = fNumList[i][j] % 10;
			}
			else {
				carry = 0;
			}
		}
	while(cin >> number){
		cout << "The Fibonacci number for " << number << " is ";
		for(appear = 19;appear >= 0 && fNumList[number][appear] == 0;appear --);
		for(int i = appear;i >= 0;i --)
			cout << fNumList[number][i];
		cout << endl;
	}
	return 0;
}
