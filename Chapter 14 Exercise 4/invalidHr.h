#pragma once
#include <exception>
using namespace std;

class invalidHr : public exception {
public:
	virtual const char* what() const throw()
	{
		return "Hours must be between 0 and 12";
	}
};