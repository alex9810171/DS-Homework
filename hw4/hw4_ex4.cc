#include <iostream>

using namespace std;

template<class ItemType>
class Node{
	private:
		ItemType item;
		Node<ItemType>* next;
	public:
		Node();
		Node(const ItemType& anItem);
		Node(const ItemType& anItem, Node<ItemType>* nextNodePtr);
		void setItem(const ItemType& anItem);
		void setNext(Node<ItemType>* nextNodePtr);
		ItemType getItem() const;
		Node<ItemType>* getNext() const;
};

template<class ItemType>
class LinkedBag{
	private:
		Node<ItemType>* headPtr;
		int itemCount;
		Node<ItemType>* getPointerTo(const ItemType& target) const;
	public:
		LinkedBag();
		LinkedBag(const LinkedBag<ItemType>& aBag);
		bool add(const ItemType& newEntry);
		void reverse();
};

template<class ItemType>
Node<ItemType>::Node() : next(nullptr){

}

template<class ItemType>
Node<ItemType>::Node(const ItemType& anItem) : item(anItem), next(nullptr){

}

template<class ItemType>
Node<ItemType>::Node(const ItemType& anItem, Node<ItemType>* nextNodePtr): item(anItem), next(nextNodePtr){

}

template<class ItemType>
void Node<ItemType>::setItem(const ItemType& anItem){
	item = anItem;
}

template<class ItemType>
void Node<ItemType>::setNext(Node<ItemType>* nextNodePtr){
	next = nextNodePtr;
}

template<class ItemType>
ItemType Node<ItemType>::getItem() const{
	return item;
}

template<class ItemType>
Node<ItemType>* Node<ItemType>::getNext() const{
	return next;
}

template<class ItemType>
LinkedBag<ItemType>::LinkedBag():headPtr(nullptr),itemCount(0){

}

template<class ItemType>
bool LinkedBag<ItemType>::add(const ItemType& newEntry){
	Node<ItemType>* newNodePtr = new Node<ItemType>();
	newNodePtr->setItem(newEntry);
	newNodePtr->setNext(headPtr);
	headPtr = newNodePtr;
	itemCount++;
	return true;
}

template<class ItemType>
void LinkedBag<ItemType>::reverse(){
	Node<ItemType>* tempPtr1 = nullptr;
	Node<ItemType>* tempPtr2 = headPtr;
	Node<ItemType>* tempPtr3 = headPtr->getNext();
	while(tempPtr3 != nullptr){
		tempPtr2->setNext(tempPtr1);
		tempPtr1 = tempPtr2;
		tempPtr2 = tempPtr3;
		tempPtr3 = tempPtr3->getNext();
	}
	tempPtr2->setNext(tempPtr1);
	headPtr = tempPtr2;
	while(headPtr != nullptr){
		cout << headPtr->getItem() << " ";
		headPtr = headPtr->getNext();
	}
	cout << endl;
}

int main(){
	LinkedBag<int> Ldata;
	int number = 0;
	
	while(cin >> number){
		Ldata.add(number);
	}
	Ldata.reverse();

	return 0;
}

