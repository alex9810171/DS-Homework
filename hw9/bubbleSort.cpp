#include <iostream>
#include <string>

using namespace std;

template<class ItemType>
void bubbleSort(ItemType theArray[], int n)
{
   //implementation
   int temp = 0;
    
   for(int i = 0;i < 9;i ++)
   	for(int j = 0;j < 9 - i;j ++)
   		if(theArray[j] > theArray[j + 1]){
   			temp = theArray[j];
   			theArray[j] = theArray[j + 1];
   			theArray[j + 1] = temp;
		}
} 

int main()
{
   int a[10] = {73, 22, 93, 43, 55, 14, 28, 65, 39, 81};
   bubbleSort(a, 10);
   for (int i = 0; i < 10; i++)
      cout << a[i] << " ";
   cout << endl;   
}
