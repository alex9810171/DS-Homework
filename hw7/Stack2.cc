#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<char> stack1;
	char a,b[1000000];
	int count = 0, stop = 0;

	while(cin >> a){
		b[count] = a;
		stack1.push(a);
		if(cin.peek() == ' '){
			stack1.push(' ');
			count ++;
			b[count] = ' ';
		}
		//prevent space
		count ++;
	}
	for(int i = 0;i < count && !stack1.empty();i ++){
		if(b[i] != stack1.top()){
			stop = 1;
			break;
		}
		stack1.pop();
	}
	if(stop == 0) cout << "true" << endl;
	else cout << "false" << endl;
	return 0;
}
