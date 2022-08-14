#include <iostream>
#include <stack>
using namespace std;

bool IsEmpty(stack<char> Words, int nowat, int count){
	if(count % 2 == 0 && count / 2 == nowat) return true;
	else return false;
}

bool IsE(stack<char> Words, int nowat, int count){
	if(Words.top() == '&' || Words.top() == '#'){
		Words.pop();
		if(Words.empty() || (count / 2 - nowat <= 0)){
			return true;
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}

bool IsVE(stack<char> Words, int nowat, int count){
	nowat ++;
	if(IsE(Words, nowat, count)){
		Words.pop();
		if(Words.top() == 'W' || Words.top() == 'A'){
			Words.pop();
			if(Words.empty() || (count / 2 - nowat <= 0)){
				return true;
			}
			else return false;
		}
		else return false;
	}
	else{
		return false;
	}
}

bool IsV(stack<char> Words){
	if(Words.top() == 'W' || Words.top() == 'A')
		return true;
	else return false;
}
bool IsEGV(stack<char> Words, char Words3[], int nowat, int count){
	while(nowat <= (count+1) / 2){
	if(IsEmpty(Words, nowat, count)) return true;
	else if(IsE(Words, nowat, count)) return true;
	else if(IsVE(Words, nowat, count)) return true;
	else if(IsV(Words) && (Words3[nowat] == '&' || Words3[nowat] == '#')){
		Words.pop();
		return IsEGV(Words, Words3, nowat = nowat + 1, count);
	}
	else return false;
	}
}

int main(){
	stack<char> Words, Words2;
	char aWord = '\0', count = 0;
	if(cin.peek() == ' '){
		Words.push(' ');
		Words2.push(' ');
		count ++;
	}
	while(cin >> aWord){
		Words.push(aWord);
		Words2.push(aWord);
		if(cin.peek() == ' '){
			Words.push(' ');
			Words2.push(' ');
			count ++;
		}
		count ++;
	}
	char Words3[count];
	for(int i = count - 1;i >= 0;i --){
		Words3[i] = Words2.top();
		Words2.pop();
	}
	if(count == 0) cout << "true" << endl;
	else if(IsEGV(Words, Words3, 0, count)) cout << "true" << endl;
	else cout << "false" << endl;

	return 0;
}
