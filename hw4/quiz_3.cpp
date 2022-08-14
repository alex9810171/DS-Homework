//Specify and define a method that deletes particular node from an ordered list.
//The node's value is given to the method as an argument.
template <class ItemType>
void LinkedBag<ItemType> :: delete(ItemType searchVal)const
{
	Node<ItemType> *nodePtr; // To traverse the list
	Node<ItemType> *previousNode; // To point to the previous node
	// If the list is empty
	if(headPtr == nullptr){
		cout << "Sorry, this link is empty." << endl;
	}
	// If the value is in the first node
	else{
		nodePtr = headPtr;
		previousNode = nullptr;
		int find = 0;
		if(nodePtr->getItem() == searchVal){
			find = 1;
			headPtr = nodePtr->setNext();
			delete nodePtr;
			nodePtr = nullptr;
		}
		else{
			previousNode = nodePtr;
			nodePtr = nodePtr->getNext();
		}
		while(nodePtr != nullPtr && find == 0){
			if(nodePtr->getItem() == searchVal){
				find = 1;
				previousNode->setNext() = nodePtr->getNext();
				delete nodePtr;
				nodePtr = nullptr;
			}
			else{
				previousNode = nodePtr;
				nodePtr = nodePtr->getNext();
			}
		}
		if(find == 0) cout << "Sorry, item doesn't exist." << endl;
		else cout << "Delete suceed." << endl;
	}
}
