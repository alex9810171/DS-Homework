#include <iostream>
using namespace std;
int main(){
	int count = 0, count2 = 0;
	char aString[2][100000];
	char a[100000];
	while(cin.peek() != ' '){
		aString[0][count];
		count ++;
	}
	int as = 0;
	while(cin.peek() != ' '){
		cin >> a[as];
		as++;
	}
	while(cin >> aString[1][count2]){
		count2++;
	}
	if(as != 5)cout << "FALSE" << endl; 
	else if(a[0] != 'b' || a[1] != 'p' || a[2] != 'v' || a[3] != 'q' || a[4] != 'd')
		cout  << "FALSE" << endl;
	else if(count != count2 || count < 3 || count2 < 3)
		cout << "FALSE" << endl;
	else{
		int decide = 0;
		for(int i = 0;i < count && decide == 0;i ++){
			if(aString[0][i] != aString[1][count2-i-1])
				decide = 1;
		}
		if(decide == 0)cout << "TRUE" << endl;
		else cout << "FALSE" << endl;
	}
	return 0;
}
