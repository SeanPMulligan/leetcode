/*
Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.

Example

For inputArray = [3, 6, -2, -5, 7, 3], the output should be
adjacentElementsProduct(inputArray) = 21.

7 and 3 produce the largest product.
*/

#include <vector>

int adjacentElementsProduct(std::vector<int> inputArray) {
    int largest = -1001;
    int i = 0;
    int j = 1;
    
    while (j < inputArray.size()) {
        int product = inputArray[i++] * inputArray[j++];
        if (product > largest) {
            largest = product;
        }
    }
    
    return largest;
}
