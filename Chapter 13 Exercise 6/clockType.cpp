#include "clockType.h"
using namespace std;


//Overload the pre-increment operator.
clockType operator++(clockType& clock)
{
	clock.sec++; //Step a
	if (clock.sec > 59) //Step b
	{
		clock.sec = 0; //Step b.1
		clock.min++; //Step b.2
		if (clock.min > 59) //Step b.3
		{
			clock.min = 0; //Step b.3.1
			clock.hr++; //Step b.3.2
			if (clock.hr > 23) //Step b.3.3
				clock.hr = 0; //Step b.3.3.1
		}
	}
	return clock; //Step c
}

//Overload the post-increment operator.
clockType operator++(clockType& clock, int u) {
	clock.sec++;
	if (clock.sec > 59)
	{
		clock.sec = 0;
		clock.min++;
		if (clock.min > 59)
		{
			clock.min = 0;
			clock.hr++;
			if (clock.hr > 23)
				clock.hr = 0;
		}
	}
	return clock;
}

//Overload the equality operator.
bool operator==(const clockType& clock, const clockType& otherClock) 
{
	return (clock.hr == otherClock.hr && clock.min == otherClock.min
		&& clock.sec == otherClock.sec);
}

//Overload the not equal operator.
bool operator!=(const clockType& clock, const clockType& otherClock) 
{
	return (clock.hr != otherClock.hr || clock.min != otherClock.min
		|| clock.sec != otherClock.sec);
}
//Overload the less than or equal to operator.
bool operator<=(const clockType& clock, const clockType& otherClock) 
{
	return ((clock.hr < otherClock.hr) ||
		(clock.hr == otherClock.hr && clock.min < otherClock.min) ||
		(clock.hr == otherClock.hr && clock.min == otherClock.min &&
			clock.sec <= otherClock.sec));
}
//Overload the less than operator.
bool operator<(const clockType& clock, const clockType& otherClock) 
{
	return ((clock.hr < otherClock.hr) ||
		(clock.hr == otherClock.hr && clock.min < otherClock.min) ||
		(clock.hr == otherClock.hr && clock.min == otherClock.min &&
			clock.sec < otherClock.sec));
}


//Overload the greater than or equal to operator.
bool operator>=(const clockType& clock, const clockType& otherClock) 
{
	return ((clock.hr > otherClock.hr) ||
		(clock.hr == otherClock.hr && clock.min > otherClock.min) ||
		(clock.hr == otherClock.hr && clock.min == otherClock.min &&
			clock.sec >= otherClock.sec));
}
//Overload the greater than operator.
bool operator>(const clockType& clock, const clockType& otherClock) 
{
	return ((clock.hr > otherClock.hr) ||
		(clock.hr == otherClock.hr && clock.min > otherClock.min) ||
		(clock.hr == otherClock.hr && clock.min == otherClock.min &&
			clock.sec > otherClock.sec));
}

void clockType::setTime(int hours, int minutes, int seconds)
{
	if (0 <= hours && hours < 24)
		hr = hours;
	else
		hr = 0;
	if (0 <= minutes && minutes < 60)
		min = minutes;
	else
		min = 0;
	if (0 <= seconds && seconds < 60)
		sec = seconds;
	else
		sec = 0;
}
void clockType::getTime(int& hours, int& minutes,
	int& seconds) const
{
	hours = hr;
	minutes = min;
	seconds = sec;
}


//Overload the stream insertion operator.
ostream& operator<<(ostream& osObject, const clockType& timeOut)
{
	if (timeOut.hr < 10)
		osObject << '0';
	osObject << timeOut.hr << ':';
	if (timeOut.min < 10)
		osObject << '0';
	osObject << timeOut.min << ':';
	if (timeOut.sec < 10)
		osObject << '0';
	osObject << timeOut.sec;
	return osObject; //return the ostream object
}

//overload the stream extraction operator
istream& operator>> (istream& is, clockType& timeIn)
{
	char ch;
	is >> timeIn.hr; //Step a
	if (timeIn.hr < 0 || timeIn.hr >= 24) //Step a
		timeIn.hr = 0;
	is.get(ch); //Read and discard :. Step b
	is >> timeIn.min; //Step c
	if (timeIn.min < 0 || timeIn.min >= 60) //Step c
		timeIn.min = 0;
	is.get(ch); //Read and discard :. Step d
	is >> timeIn.sec; //Step e
	if (timeIn.sec < 0 || timeIn.sec >= 60) //Step e
		timeIn.sec = 0;
	return is; //Step f
}

clockType::clockType(int hours, int minutes, int seconds)
{
	setTime(hours, minutes, seconds);
}