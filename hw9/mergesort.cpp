#include <iostream>
#include <string>

using namespace std;
const int MAX_SIZE = 50;

template<class ItemType>
void merge(ItemType theArray[], int first, int mid, int last)
{
	//implementation
	int tempArray[last - first + 1];
	int tempfirst = first,tempmid = mid + 1;
	int fill = 0;
	while(tempfirst <= mid && tempmid <= last){
		if(theArray[tempfirst] < theArray[tempmid]){
			tempArray[fill] = theArray[tempfirst];
			tempfirst ++;
		}
		else{
			tempArray[fill] = theArray[tempmid];
			tempmid ++;
		}
		fill ++;
	}
	if(tempfirst > mid)
		for(tempmid;tempmid <= last;tempmid ++){
			tempArray[fill] = theArray[tempmid];
			fill ++;
		}
	else if(tempmid > last)
		for(tempfirst;tempfirst <= mid;tempfirst ++){
			tempArray[fill] = theArray[tempfirst];
			fill ++;
		}
	for(int i = 0;i < fill;i ++)
		theArray[i + first] = tempArray[i];
}  

template<class ItemType>
void mergeSort(ItemType theArray[], int first, int last)
{
	if (first < last)
	{
		int mid = first + (last - first) / 2; 
		mergeSort(theArray, first, mid);
		mergeSort(theArray, mid + 1, last);

		merge(theArray, first, mid, last);
	}  
} 

int main()
{
	int a[10] = {73, 22, 93, 43, 55, 14, 28, 65, 39, 81};
	mergeSort(a, 0, 9);
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
} 


