#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//constructor
	StackArray() {
		top = -1;
	}

	int push(int element) {
		if (top == 4) {
			cout << "number of data execed the limit" << endl;
			return 0;
		}
		top++; //step 2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) { //step 1
			cout << "\nStack is empty. Cannot pop." << endl; //1.a
			return;
		}

		cout << "\nThe popped element is : " << stack_array[top] << endl; //step 2
		top--; //step 3 decrement
	}

	//method for chack if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	StackArray data;
	char ch;

	while (true)
	{
		cout << "Menu Stack" << endl;
		cout << "1.push " << endl;
		cout << "2.pop" << endl;
		cout << "3.display" << endl;
		cout << "4.exit" << endl;
		cout << "masukan data : ";
		cin >> ch;
	}

	switch (ch)
	{

	case '1': {
		int element;
		cout << "Enter an element : ";
		cin >> element;
		data.push(ch);
		break;
	}case '2': 
		if (data.empty()) {
			cout << "\nStack is empty." << endl;
			break;
		
	}
		data.pop();
		break;
	case '3': {
		data.display();
		break;
	}case '4': {
		return 0;
	}
		
	default:
		cout << "invalid input" << endl;
	}
	return 0;
}