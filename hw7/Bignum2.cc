#include <iostream>
using namespace std;
int main(){
	int bNumList[1001][2600], nCarry = 0, nCarry2 = 0, inputNum = 0;
	bNumList[0][0] = 1;
	// calculate and save
	for(int i = 1;i < 1001;i ++){
		int carryLine[4][2600], tempNum[4], number = i;
		// deal with number to digit
		for(int j = 0;j < 4;j ++){
			tempNum[j] = number % 10;
			number = number / 10;
		}
		// big number calculate; generate 4 line
		for(int j = 0;j < 4;j ++) // 4 line to add
			for(int k = 0;k < 2600;k ++){ // max 2600 digit
				carryLine[j][j + k] = bNumList[i - 1][k] * tempNum[j] + nCarry;
				if(carryLine[j][j + k] > 9){
					nCarry = carryLine[j][j + k] / 10;
					carryLine[j][j + k] = carryLine[j][j + k] % 10;
				}
				else {
					nCarry = 0;
				}
			}
		// 4 line add
		for(int j = 0;j < 2600;j ++){
			bNumList[i][j] = carryLine[0][j] + carryLine[1][j] + carryLine[2][j] + carryLine[3][j] + nCarry2;
			if(bNumList[i][j] > 9){
				nCarry2 = bNumList[i][j] / 10;
				bNumList[i][j] = bNumList[i][j] % 10;
			}
			else {
				nCarry2 = 0;
			}
		}
	}
	// input & output
	while(cin >> inputNum){
		int bNum = 0;
		for(int i = 0;i < 2600;i ++) bNum = bNum + bNumList[inputNum][i];
		cout << bNum << endl;
	}
	return 0;
}
