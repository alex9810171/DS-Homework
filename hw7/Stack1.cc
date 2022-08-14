#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<char> stack1;
	char a;

	while(cin >> a){
		stack1.push(a);
		if(cin.peek() == ' ')
			stack1.push(' ');
	}
	while(!stack1.empty()){
		cout << stack1.top();
		stack1.pop();
	}
	cout << endl;
	return 0;
}
