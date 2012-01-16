/* *********************************************************************
 * Liam Boyle
 * CIS 252-55Z1
 * Assignment:	Assignment 2 part 2
 * Filename:	NumberDemo2.cpp
 * Purpose:		Expression evaluation demonstartion
 * Compiled for:	Ubuntu Linux 11.10
 * Compiled with:	g++ 4.6.1
 * IDE:				Geany 0.20
 * 16 Jan 2012
 * *********************************************************************
 */
 
// Include and Using Statements
#include<iostream>
#include<cstdlib>

using namespace std;

//Function Prototypes
	// pass

// Global Variable Declarations
int ExitStatusVar = 0;

int main()
{
	// Main function variable declarations
	int a, b, c;
	double x, y, z;
	
	// Main function code body
	
	// Assignment statements
	a = 13;
	b = 4;
	x = 3.3;
	y = 15.78;
	
	// body code
	c = a+b;
	cout << "a + b is: " << c << endl;
	z = x+y;
	cout << "x + y is: " << z << endl;
	
	c = a/b;
	cout << "a / b is: " << c << endl;
	
	c = a%b;
	cout << "a % b is: " << c << endl;
	
	a = 2;
	c = ++a;
	cout << "a is: " << a << " and c is: " << c << endl;
	
	a = 2;
	c = a++;
	cout << "a is: " << a << " and c is: " << c << endl;
	
	return ExitStatusVar;
}

// Function Definitions
	//pass
