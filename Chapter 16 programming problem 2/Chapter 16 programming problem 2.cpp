#include <iostream>

using namespace std;


void bubbleSort(int array[], const int ARRAY_SIZE){
    int temp;

    for (int i = 0; i < ARRAY_SIZE; i++) {
        for (int j = 0; j < (ARRAY_SIZE - i - 1); j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Copied from the book
void insertionSort(int array[], const int ARRAY_SIZE)
{
    int firstOutOfOrder, location;
    int temp;
    for (firstOutOfOrder = 1; firstOutOfOrder < ARRAY_SIZE;
        firstOutOfOrder++)
        if (array[firstOutOfOrder] < array[firstOutOfOrder - 1])
        {
            temp = array[firstOutOfOrder];
            location = firstOutOfOrder;
            do
            {
                array[location] = array[location - 1];
                location--;
            } while (location > 0 && array[location - 1] > temp);
            array[location] = temp;
        }
} 



bool binarySearch(const int array[],  const int ARRAY_SIZE, int key) {

    int left = 0;
    int right = ARRAY_SIZE - 1;

    while (left <= right) {
        int middle = left + ((right - left) / 2);

        if (array[middle] == key)
            return true;

        else if (key < array[middle])
            right = middle - 1;

        else
            left = middle + 1;
    }
    return false;
}

void printArray(int array[], const int ARRAY_SIZE)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << array[i] << endl;
}

int main()
{
    cout << "List 1" << endl;
    const int ARRAY1_SIZE = 10;
    int list1[ARRAY1_SIZE] = { 2, 9, 8, 7, 6, 1, 10, 4, 3, 5 };
    cout << "Unsorted Array/List: " << endl;
    printArray(list1, ARRAY1_SIZE);
    
    cout << endl << "Bubble Sort: " << endl;

    bubbleSort(list1, ARRAY1_SIZE);
    printArray(list1, ARRAY1_SIZE);

    cout << endl << "---------------------------------------" << endl << endl;

    cout << "List 2" << endl;
    const int ARRAY2_SIZE = 10;
    int list2[ARRAY2_SIZE] = { 2, 9, 8, 7, 6, 1, 10, 4, 3, 5 };
    cout << "Unsorted Array/List: " << endl;
    printArray(list2, ARRAY2_SIZE);

    cout << endl << "Insertion Sort: " << endl;

    insertionSort(list2, ARRAY2_SIZE);
    printArray(list2, ARRAY2_SIZE);

    cout << endl << "Binary search" << endl;

    int key;
    cout << "Enter a number you want to check if it is in the list: ";
    cin >> key;
    if ((binarySearch(list2, ARRAY2_SIZE, key)) == true) {
        cout << key << " is in the list" << endl;
    }
    else 
        cout << key << " is NOT in the list" << endl;


    cout << endl;
    system("pause");
    return 0;
}
