#include <iostream>
#include <string>
#include "QS.h"

int main() {
    srand(time(NULL));
    QS quickSortArray;
    quickSortArray.createArray(10);
    for (int i = 0; i < 10; i++) {
        quickSortArray.addToArray(rand() % 100);
    }
    quickSortArray.sortAll();
    return 0;
}