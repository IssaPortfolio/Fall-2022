#include <iostream>

using namespace std;


int remove(int array[], const int ARRAY_SIZE, const int removeItem) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (array[i] == removeItem) {
            for (int j = i; j < (ARRAY_SIZE - 1); j++) {
                array[j] = array[j + 1];
            }
            return (ARRAY_SIZE - 1);
        }
    }
}

int removeAll(int array[], const int ARRAY_SIZE, const int removeItem) {
    return 0;
}

int removeAt(int array[], const int ARRAY_SIZE, const int index) {

    if ((index >= ARRAY_SIZE) || (index < 0))
        cout << "This index is out of range!" << endl;

    else if (ARRAY_SIZE > 0) {
        for (int i = index; i < ARRAY_SIZE; i++) {
            if (i >= index)
                array[i] = array[i + 1];
        }
        return ARRAY_SIZE - 1;
    }
    else
        cout << "This array is empty!" << endl;
    return 0;
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

    cout << "Array 1 size: " << array1_size << endl;
    cout << "Array 1 unsorted" << endl;
    printArray(array1, array1_size);

    cout << "Array 1 sorted" << endl;
    insertionSort(array1, array1_size);
    printArray(array1, array1_size);

    int removeAtIndex;
    cout << "Enter index you want removed: ";
    cin >> removeAtIndex;
    array1_size = removeAt(array1, array1_size, removeAtIndex);

    cout << "Array 1 size: " << array1_size << endl;
    printArray(array1, array1_size);

    int removeItem;
    cout << "Enter one number you want removed: ";
    cin >> removeItem;
    array1_size = remove(array1, array1_size, removeItem);
    cout << "Array 1 size: " << array1_size << endl;
    printArray(array1, array1_size);

    cout << "Executing function remove all" << endl;
    array1_size = removeAll(array1, array1_size, removeItem);
    cout << "Array 1 size: " << array1_size << endl;
    printArray(array1, array1_size);

    cout << endl;
    delete[] array1;
    system("pause");
    return 0;
}