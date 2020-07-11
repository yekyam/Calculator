// Calculator.cpp : Defines the entry point for the console application.
//

/*
App made by Manuel Mateo. I started the application because my dad said I couldn't make a calculator app in less than an hour. 
I was able to get the general idea down but had trouble getting the loop to work.
Total dev time ~1hr 
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std; 
int choice; 
float num1; 
float num2;
bool on = true; 
bool loop = true; 

//every function is practically the same, the only difference is the name and the operation. 


void addition() {
		cout << "Enter a number:\n";
		cin >> num1;
		if (!num1) {
			cerr << "Didn't input a number."; 
		}
		cout << "+\n";
		cin >> num2;
		if (!num2) {
			cerr << "Didn't input a number."; 
		}
		double output = num1 + num2;
		cout << " = " << output <<"\nExit? Type No to continue.\n";
		string exit = "No";
		cin >> exit; 
		if (exit == "No" or exit == "no") {
			loop = true; // Added definition here because if you try calling the function after a different one, loop would've already been set to false
			while (loop == true) { // looping here to avoid having to reset operation everytime 
				cout << "\nContinuing, type in another number\n";
				cin >> num2;
				if (!num2) {
					cerr << "Didn't input a number.";
				}
				double *i;
				i = &output;
				output = *i + num2; //Used a pointer to differentiate between the output and the number being added
				cout << "Answer: " << output << "\nExit? Type No to continue\n";
				exit.clear();
				cin >> exit;
				if (exit == "No" or exit == "no")
				{
					loop = true;
				}
				else {
					loop = false;
					
				}
			}
		}
		else {
			loop = false; // Notice:Only turns off Loop for addition, not entire program
			
		}
	
}
void subtraction() {
	cout << "Enter a number:\n";
	cin >> num1;
	if (!num1) {
		cerr << "Didn't input a number.";
	}
	cout << "-\n";
	cin >> num2;
	if (!num2) {
		cerr << "Didn't input a number.";
	}
	double output = num1 - num2;
	cout << " = " << output << "\nExit? Type No to continue.\n";
	string exit = "No";
	cin >> exit;
	if (exit == "No" or exit == "no") {
		loop = true;
		while (loop == true) {
			cout << "\nContinuing, type in another number\n";
			cin >> num2;
			if (!num2) {
				cerr << "Didn't input a number.";
			}
			double *i;
			i = &output;
			output = *i - num2;
			cout << "Answer: " << output << "\nExit? Type No to continue\n";
			exit.clear();
			cin >> exit;
			if (exit == "No" or exit == "no"){
				loop = true;
			}
			else {
				loop = false;
				
			}
		}
	}
	else {
		loop = false;
		
	}

}
void multiplication() {
	cout << "Enter a number:\n";
	cin >> num1;
	if (!num1) {
		cerr << "Didn't input a number.";
	}
	cout << "*\n";
	cin >> num2;
	if (!num2) {
		cerr << "Didn't input a number.";
	}
	double output = num1 * num2;
	cout << " = " << output << "\nExit? Type No to continue.\n";
	string exit = "No";
	cin >> exit;
	if (exit == "No" or exit == "no") {
		loop = true;
		while (loop == true) {
			cout << "\nContinuing, type in another number\n";
			cin >> num2;
			if (!num2) {
				cerr << "Didn't input a number.";
			}
			double *i;
			i = &output;
			output = *i * num2;
			cout << "Answer: " << output << "\nExit? Type No to continue\n";
			exit.clear();
			cin >> exit;
			if (exit == "No" or exit == "no"){
				loop = true;
			}
			else {
				loop = false;
				
			}
		}
	}
	else {
		loop = false;
		
	}

}
void divison() {
	cout << "Enter a number:\n";
	cin >> num1;
	if (!num1) {
		cerr << "Didn't input a number.";
	}
	cout << "/\n";
	cin >> num2;
	if (!num2) {
		cerr << "Didn't input a number.";
	}
	double output = num1 / num2;
	cout << " = " << output << "\nExit? Type No to continue.\n";
	string exit = "No";
	cin >> exit;
	if (exit == "No" or exit == "no") {
		loop = true;
		while (loop == true) {
			cout << "\nContinuing, type in another number\n";
			cin >> num2;
			if (!num2) {
				cerr << "Didn't input a number.";
			}
			double *i;
			i = &output;
			output = *i / num2;
			cout << "Answer: " << output << "\nExit? Type No to continue\n";
			exit.clear();
			cin >> exit;
			if (exit == "No" or exit == "no"){
				loop = true;
			}
			else {
				loop = false;
				
			}
		}
	}
	else {
		loop = false;
		
	}

}

int main()
{
	while (on != false) {
		cout << "Enter operation:\n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n5)Exit\n";
		cin >> choice;
		if ( choice == 1) { 
			addition();
			
		}
		else if (choice == 2) {
			subtraction();

		}
		else if (choice == 3) {
			multiplication();
		}
		else if (choice == 4) {
			divison();
		}
		else if (choice == 5) {
			on = false;
		}
		else {
			return -1;
		}

	}
    return 0;
}

