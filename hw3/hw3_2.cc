#include <iostream>

using namespace std;

class Temperature{
	public:
		Temperature();
		~Temperature();

		int input();
		void convert();
	protected:
	private:
		int choose, ndegree;
};

Temperature::Temperature(){
	choose = -1;
	ndegree = 0;
}

Temperature::~Temperature(){

}

int Temperature::input(){
	while(choose < 0 || choose > 2){
		cout << "Please input '1' or '2' to choose which convert you want to do." << endl;
		cout << "1 is to convert Celsius to Fahrenheit." << endl;
		cout << "2 is to convert Fahrenheit to Celsius." << endl;
		cout << "0 is to exit." << endl;
		cin >> choose;
		if(choose < 0 || choose >2)
			cout << "Please input '1' or '2' to choose which convert you want to do." << endl;
	}
	if(choose == 0){
		cout << "Program was exited." << endl;
		return 0;
	}
	else if(choose == 1){
		cout << "Please enter Celsius degree: ";
		cin >> ndegree;
		return 1;
	}
	else if(choose == 2){
		cout << "Please enter Fahrenheit degree: ";
		cin >> ndegree;
		return 1;
	}
}

void Temperature::convert(){
	if(choose == 1){
		cout << "Convert to Fahrenheit: ";
		cout << (9 * ndegree / 5) + 32 << endl;
	}
	else if(choose == 2){
		cout << "Convert to Celsius: ";
		cout << 5 * (ndegree - 32) / 9 << endl;
	}
}

int main(){
	Temperature degree;
	int decide = 0;

	decide = degree.input();
	if(decide == 0) ;
	else degree.convert();

	return 0;
}
