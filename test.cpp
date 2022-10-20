#include <iostream>
#include <string>
#include "QS.h"

int main() {
    QS quickSortArray;
    quickSortArray.createArray(10);
    for (int i = 0; i < 10; i++) {
        quickSortArray.addToArray(10 - i);
    }
    cout << quickSortArray.getArray() << endl;
    quickSortArray.medianOfThree(0, 9);
    cout << quickSortArray.getArray() << endl;
    return 0;
}