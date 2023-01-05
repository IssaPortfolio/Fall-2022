
#include <iostream>
#include <string>
#include "memberType.h"
using namespace std;

// Input name
void memberType::setName() 
{
	// Set the name
	cout << "Enter name: ";
	cin >> memberName;
}
// Update name
string memberType::updateName()
{
	return memberName;
}
// Input id
void memberType::setID()
{
	// Set the name
	cout << "Enter id: ";
	cin >> memberID;
}

// Input number of books purchased
void memberType::setNumOfBooksPurchased()
{
	// Set the name
	cout << "Enter Number of Books Purchased: ";
	cin >> member_num_Of_Books_Purchased;
}

// Input cost of books
void memberType::setBooksCosts()
{
	// Set the name
	cout << "Enter Book Costs: ";
	cin >> member_book_costs;
}

// Updates id, num of books purchased, and books cost members
int memberType::updateIDandBooksInfo()
{
	return memberID;
	return member_num_Of_Books_Purchased;
	return member_book_costs;
}

// Outputs member info
void memberType::printInfo() const
{
	cout << "----------------------------------------------------------" << endl;
	cout << "Name: " << memberName << endl;
	cout << "ID: " << memberID << endl;
	cout << "Number of Books Purchased: " << member_num_Of_Books_Purchased << endl;
	cout << "Books Costs: $" << member_book_costs << endl;
	cout << "----------------------------------------------------------" << endl;
}

// Default constructor
memberType::memberType(){}
