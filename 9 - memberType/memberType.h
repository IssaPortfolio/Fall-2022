#pragma once
#include <string>
using namespace std;

class memberType
{
private:
	// Members
	string memberName = "";
	int memberID = 0;
	int member_num_Of_Books_Purchased = 0;
	double member_book_costs = 0;

public:
	// methods
	void setName();
	string updateName();
	void setID();
	void setNumOfBooksPurchased();
	void setBooksCosts();
	int updateIDandBooksInfo();
	void printInfo() const;

	// Default constructor
	memberType();
};