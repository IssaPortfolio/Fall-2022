#pragma once
#include <exception>
using namespace std;

class invalidMin : public exception {
public:
	virtual const char* what() const throw()
	{
		return "Minutes must be between 0 and 59";
	}
};