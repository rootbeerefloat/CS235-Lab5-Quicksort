#include <iostream>
#include <string>
#include "QS.h"

int main() {
    srand(time(NULL));
    QS quickSortArray;
    int size = 4;
    quickSortArray.createArray(size);
    cout << quickSortArray.getArray() << endl;
    for (int i = 0; i < size; i++) {
        quickSortArray.addToArray(rand() % 100);
    }
    cout << quickSortArray.getArray() << endl;
    quickSortArray.sortAll();
    cout << quickSortArray.getArray() << endl;
    return 0;
}