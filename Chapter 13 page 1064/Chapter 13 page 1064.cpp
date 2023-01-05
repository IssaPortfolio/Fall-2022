#include <iostream>
using namespace std;

template <class T>
void insertionSort(T list[], T listLength){
	int firstOutOfOrder, location;
	T temp;

	for (firstOutOfOrder = 1; firstOutOfOrder < listLength; firstOutOfOrder++) {
		if (list[firstOutOfOrder] < list[firstOutOfOrder - 1]) {
			temp = list[firstOutOfOrder];
			location = firstOutOfOrder;

			do {
				list[location] = list[location - 1];
				location--;
			} while (location > 0 && list[location - 1] > temp);

			list[location] = temp;
		}
	}
} 

int main() {
	int const ARRAYSIZE = 50;

	double dList[ARRAYSIZE] = { 20, 14, 30, 41, 2, 29, 6, 16, 23, 10, 18, 28, 7, 12, 27, 22, 24,
						 21, 39, 33, 50, 46, 48, 37, 11, 49, 34, 31, 26, 5, 47, 25, 9, 36,
						 44, 3, 40, 43, 15, 38, 42, 17, 19, 32, 13, 1, 35, 8, 4, 45 };

	insertionSort<double>(dList, ARRAYSIZE);

	for (int i = 0; i < ARRAYSIZE; i++)
		cout << dList[i] << " ";

	system("pause");
	return 0;
}