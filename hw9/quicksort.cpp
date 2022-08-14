#include <iostream>
#include <string>
#define MIN_SIZE 1
using namespace std;

template<class ItemType>
void quickSort(ItemType theArray[], int left, int right) 
{
	//implementation
		int pivot = theArray[right], tleft = left;
		for(int i = left;i <= right;i ++){
			if(theArray[i] < pivot){
				int temp = theArray[tleft];
				theArray[tleft] = theArray[i];
				theArray[i] = temp;
				tleft ++;
			}
		}
		int temp = theArray[tleft];
		theArray[tleft] = theArray[right];
		theArray[right] = temp;
		if(left < tleft - 1)quickSort(theArray, left, tleft - 1);
		if(tleft + 1 < right) quickSort(theArray, tleft + 1,right);
}

int main()
{
	int a[10] = {73, 22, 93, 43, 55, 14, 28, 65, 39, 81};
	quickSort(a, 0, 9);
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
} 
