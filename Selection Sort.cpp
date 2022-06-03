
#include <iostream>
#include <iterator>

int main()
{
    int Array[]{ 30, 50, 20, 10, 40 };
    const int length{ static_cast<int>(std::size(Array)) };
    //1. outer loop //2.Inner loop 
    for (int outerindex = 0; outerindex < length-1; outerindex++) { //to swap elements
        int smallestIndex{ outerindex };
        for (int innerindex = outerindex + 1; innerindex < length; innerindex++) {
            if (Array[innerindex] < Array[smallestIndex]) {
                smallestIndex = innerindex;
            }
        }
        std::swap(Array[outerindex], Array[smallestIndex]);
    }
    for (int iIndex = 0; iIndex < length; iIndex++) {
    std::cout << Array[iIndex] << ' ';
    }
    std::cout << '\n';
    return 0;
}
