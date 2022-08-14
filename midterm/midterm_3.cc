#include <iostream>
using namespace std;

int main(){
	int number = 0, month = 0, date = 0, i = 0;
	int monthday[13] = {0,0,31,59,90,120,151,181,212,243,273,304,334};
	string day[7] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};

	cin >> number;
	for(i = 0;i < number;i ++){
		cin >> month;
		cin >> date;
		cout << day[(monthday[month] + date) % 7] << endl;
	}
	return 0;
}

