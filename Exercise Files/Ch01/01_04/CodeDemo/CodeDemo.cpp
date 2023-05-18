// Learning C++ 
// Challenge 01_04
// Console Interaction, by Eduardo Corpeño 
// Print a message asking for the user's name then print a message with that name

#include <iostream>
#include <string>

using namespace std;

int main(){
	// declare empty string variable
	string str;
	cout << "What is your name?" << endl;
	cin >> str;

	cout << "Hello " << str << endl;
	return(0);
}
