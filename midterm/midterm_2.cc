#include <iostream>
using namespace std;
class Node{
	public:
		Node();
		char getItem();
		Node* getNext();
		void setItem(char newItem);
		void setNext(Node* newPtr);
	private:
		char item;
		Node* nextPtr;
};

class LinkedStack{
	public:
		LinkedStack();
		bool isEmpty();
		void push(char word);
		void pop();
		char peek();
	private:
		Node* topPtr;
};

Node::Node(){
	item = '\0';
	nextPtr = NULL;
}
char Node::getItem(){
	return item;
}
Node* Node::getNext(){
	return nextPtr;
}
void Node::setItem(char newItem){
	item = newItem;
}
void Node::setNext(Node* newPtr){
	nextPtr = newPtr;
}

LinkedStack::LinkedStack(){
	topPtr = NULL;
}
bool LinkedStack::isEmpty(){
	if(topPtr == NULL) return true;
	else return false;
}
void LinkedStack::push(char word){
	Node *newNode;
	newNode->setItem(word);
	newNode->setNext(topPtr);
	topPtr->setNext(newNode);
}
void LinkedStack::pop(){
	Node *tempPtr = topPtr;
	topPtr = topPtr->getNext();
	delete tempPtr;
}
char LinkedStack::peek(){
	return topPtr->getItem();
}

int main(){
	LinkedStack stack;
	Node aNode;
	char aString[100000];
	char word[1];
	int count = 0, scount = 0;
	while(cin.peek() != ' '){
		cin >> aString[count];
		count ++;
	}
	string words;
	cin >> words;
	while(cin >> word[0]){
		stack.push(word[0]);
		scount ++;
	}
	if(words != "bpvqd" || count <= 2 || count != scount) cout << "FALSE" << endl;
	else{
		int decide = 0;
		for(int i = 0;i < count && decide == 0;i ++){
			if(stack.peek() != aString[i])
				decide = 1;
			else
				stack.pop();
		}
		if(decide == 0)cout << "TRUE" << endl;
		else cout << "FALSE" << endl;
	}
	return 0;
}
