#include <iostream>
#include <string>

using namespace std;

template<class ItemType>
int findIndexofLargest(const ItemType theArray[], int size);

template<class ItemType>
void selectionSort(ItemType theArray[], int n)
{
   //implementation
   for(int i = 9;i >= 0;i --){
   	int big = findIndexofLargest(theArray, i);
   	int item = theArray[big];
   	if(item > theArray[i]){
	   for(int j = big;j < i;j ++)
   		theArray[j] = theArray[j + 1];
   		theArray[i] = item;
   }
   }   
} 

template<class ItemType>
int findIndexofLargest(const ItemType theArray[], int size)
{
   int indexSoFar = 0; 
   for (int currentIndex = 1; currentIndex < size; currentIndex++)
   {
      if (theArray[currentIndex] > theArray[indexSoFar])
         indexSoFar = currentIndex;
   } 
   return indexSoFar; 
} 

int main()
{
   int a[10] = {73, 22, 93, 43, 55, 14, 28, 65, 39, 81};
   selectionSort(a, 10);
   for (int i = 0; i < 10; i++)
      cout << a[i] << " ";
   cout << endl;   
}  
