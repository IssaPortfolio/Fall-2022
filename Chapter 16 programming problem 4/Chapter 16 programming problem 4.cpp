#include <iostream>

using namespace std;


int removeAt(int array[], const int ARRAY_SIZE, const int removeAtIndex) {

    if ((removeAtIndex >= ARRAY_SIZE) || (removeAtIndex < 0)) 
        cout << "This index is out of range!" << endl;

    else if (ARRAY_SIZE > 0) {
        for (int i = removeAtIndex; i < ARRAY_SIZE; i++) {
            if (i >= removeAtIndex)
                array[i] = array[i + 1];
        }
        return ARRAY_SIZE - 1;
    }
    else
        cout << "This array is empty!" << endl;
    return 0;
}

void printArray(const int array[], const int ARRAY_SIZE) {
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << array[i] << endl;
}

int main() {

    int array1_size;
    cout << "Enter the size of your array: ";
    cin >> array1_size;

    int* array1 = new int[array1_size];

    cout << "Enter " << array1_size << " items you want in your array: ";
    for (int i = 0; i < array1_size; i++)
        cin >> array1[i];

    cout << "List 1" << endl;
    printArray(array1, array1_size);

    int removeAtIndex;
    cout << "Enter index you want removed: ";
    cin >> removeAtIndex;
    array1_size = removeAt(array1, array1_size, removeAtIndex);

    cout << "Array size: " << array1_size << endl;
    printArray(array1, array1_size);

    cout << endl;
    delete[] array1;
    system("pause");
    return 0;
}
