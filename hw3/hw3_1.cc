/***************************************************
  Here we expect user to input some data,such as:
  10
  9
  34
  100
  123

  or

  10 9 34 100 123

  (need a end of line or space to seperate each number)

  I set some check point to prevent user entering a negative number.
 ***************************************************/
#include <iostream>

using namespace std;

class client_function{
	public:
		client_function();
		~client_function();

		int inputdata();
		void outputdata();

	protected:
	private:
		int input;
		int chardata[11];
};

client_function::client_function(){
	int i = 0;

	input = -1;
	for(i = 0;i < 11;i ++) chardata[i] = 0;
}

client_function::~client_function(){

}

int client_function::inputdata(){
	while(cin >> input){
		if(input > 100) input = 100;
		else if(input < 0) return -1;
		chardata[input/10]++;
	}
	return 0;
}

void client_function::outputdata(){
	int i = 0, j = 0;

	for(i = 0;i < 10;i ++){
		cout << i*10 << "~" << (i + 1)*10 - 1 << ": ";
		for(j = 0;j < chardata[i];j ++)cout << "*";
		cout << endl;
	}
	cout << "100-above: ";
	for(j = 0;j < chardata[i];j ++)cout << "*";
	cout << endl;
}

int main(){
	int decide = 0;
	client_function CF;

	decide = CF.inputdata();
	if(decide == -1){
		cout << "Sorry, you need to input native number." << endl;
	}
	else {
		CF.outputdata();
	}

	return 0;
}

