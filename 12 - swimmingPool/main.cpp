

#include <iostream>
#include "swimmingPool.h"

int main()
{
	// Instance
    swimmingPool pool;
	// Methods
    pool.poolDimensions();
    pool.updatePoolDimensions();

	// Asks if pool full or not
	string isEmpty;
	cout << "Is your pool full? (y) or (n): " << endl;
	cin >> isEmpty;
	if (isEmpty == "n")
	{
		pool.amountToFill();
	}
	else if (isEmpty == "y")
	{
		pool.timeToDrain();
	}

	
	system("pause");
	return 0;
}

