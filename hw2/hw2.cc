#include <iostream>
using namespace std;
int step=0;
void hanoi(int disk,char from,char tmp,char to){
	if(disk == 1){
		cout << "Moving disk " << disk
			 << " from pillar " << from 
			 << " to pillar " << to << endl;
		step++;
	}
	else{
		hanoi(disk-1,from,to,tmp);
		cout << "Moving disk " << disk
		     << " from pillar " << from
	         << " to pillar " << to << endl;
		step++;
		hanoi(disk-1,tmp,from,to);
	}
}
int main(void){
	hanoi(4,'A','B','C');
	cout << "Moving times:" << step << endl;
	return 0;
}
