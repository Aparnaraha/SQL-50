// C = 5 / 9 * (F - 32)

#include<iostream>
using namespace std;

int main() {
	int F;
	cout << "Enter temperature in Farenhiet: ";
	cin >> F;
	float C = (5 / 9.0) * (F - 32);
	cout << C << endl;
	// Assignment Operator (=)
	// Arithematic Operator (+,-,*,/,%)
	int remainder = (10 % 3);
	cout << remainder << endl;
	cout << endl;
	// Relational Operator (>=, >, <=, <, !=, ==) OUTPUT BOOL (TRUE -> 1, FALSE -> 0)
	bool isEqual = (5 == 5); // 1
	bool notEqual = (3 != 3); // 0
	int greaterThan = (4 > 3); // 1
	int lessThan = (5 < 6); // 1
	cout << isEqual << "\n" << notEqual << "\n" << greaterThan << "\n" << lessThan << "\n"; // 1 0 1 1
	
	cout << endl;
	// AND
	// TRUE FALSE = FALSE
	bool tf = (isEqual && notEqual); 
	// TRUE TRUE = TRUE
	bool tt = (isEqual && greaterThan);
	
	cout << (!100) << "\n" << tt; // 0 1
}