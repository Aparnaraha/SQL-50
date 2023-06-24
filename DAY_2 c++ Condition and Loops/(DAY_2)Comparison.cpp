#include<iostream>
using namespace std;

int main() {
	int a, b;
	/*
	int a;
	int b;
	*/
	cout << "Enter two numbers: ";
	cin >> a;
	cin >> b;
	// cin >> a >> b;
	
	/* 
	IF ELSE BLOCK [ELSE CAN BE OMITTED]
	
	if(condition) {
		
	} else {
		
	}
	*/
	
	/* 
	if(a == b) {
		cout << "I am here\n";
	}
	*/
	
	// NESTED IF
	/*
	if(a == b) {
		cout << "They are equal\n";
	} else {
		// A != B
		if(a > b) {
			cout << "First is greater than second\n";
		} else {
			// A <= B && A != B => (A < B)
			cout << "Second is greater than first\n";
		}
	}
	*/
}	