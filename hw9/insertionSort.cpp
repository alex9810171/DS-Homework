#include <iostream>
#include <string>

using namespace std;

template<class ItemType>
void insertionSort(ItemType theArray[], int n)
{
   //implementation
   for(int i = 0;i < 10;i ++){
   	int temp = theArray[i];
	for(int j = 0;j < i;j ++)
   		if(temp < theArray[j]){
   			for(int k = i ;k > j;k --)
   				theArray[k] = theArray[k - 1];
			theArray[j] = temp;
			break;    
		}
   }
}

int main()
{
   int a[10] = {73, 22, 93, 43, 55, 14, 28, 65, 39, 81};
   insertionSort(a, 10);
   for (int i = 0; i < 10; i++)
      cout << a[i] << " ";
   cout << endl;
} 
