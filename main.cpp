#include <iostream>;

using namespace std;

void menu();

// getInputNumber, gets an integer number from the user
int getInputNumber(int number) {
	int input = 0;
	cout << "Enter the " << number << ". number: ";
	cin >> input;
	cout << endl;
	return input;
}

//printResult, prints the result and calls the menu() function (loop)
void printResult(int result) {
	cout << "The result is: " << result << "\n\n\n";
	menu();
}

//add, addition of 2 numbers
void add() {
	int val1 = getInputNumber(1);
	int val2 = getInputNumber(2);
	int result = val1 + val2;
	printResult(result);
}

//sub, substraction of 2 numbers
void sub() {
	int val1 = getInputNumber(1);
	int val2 = getInputNumber(2);
	int result = val1 - val2;
	printResult(result);
}

//mul, multiplication of 2 numbers
void mul() {
	int val1 = getInputNumber(1);
	int val2 = getInputNumber(2);
	int result = val1 * val2;
	printResult(result);
}

//div, division of 2 numbers
void div() {
	int val1 = getInputNumber(1);
	int val2 = getInputNumber(2);
	int result = val1 / val2;
	printResult(result);
}

//menu, the user chooses a function 
void menu() {
	cout << "Wähle deinen Modus: \n (1): Addieren \n (2): Subtrahieren \n (3): Multiplizieren \n (4): Dividieren \n (q): Beenden \n\n Input:";
	char input = ' ';
	cin >> input;
	cout << "\n\n\n";

	switch (input) {
		case('1'):
			add();
			break;
		case('2'):
			sub();
			break;
		case('3'):
			mul();
			break;
		case('4'):
			div();
			break;
		case('q'):
			return;
			break;
		default:
			cout << "Invalid Input. Please try again. \n\n\n";
			break;
	}
}
//main function
int main() {

	menu();

	system("PAUSE");

	return 0;
}
