#include <iostream>
#include <string>
#include "QS.h"

int main() {
    QS quickSortArray;
    quickSortArray.medianOfThree(0, 2);
    delete &quickSortArray;
    return 0;
}