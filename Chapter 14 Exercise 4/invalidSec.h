#pragma once
#include <exception>
using namespace std;

class invalidSec : public exception {
public:
	virtual const char* what() const throw()
	{
		return "Seconds must be between 0 and 59";
	}
};