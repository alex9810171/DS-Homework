template <class ItemType>
Node<ItemType>* getNodeAt(int position) const{
	Node<ItemType>* ptr = headPtr;
	return recursiveFind(position, ptr, 1);
}

template <class ItemType>
Node<ItemType>* recursiveFind(int position,  Node<ItemType>* ptr, int nowat){
	if(nowat != position)
		recursiveFind(position, ptr->getNext(), nowat + 1);
	else
		return ptr;
}
