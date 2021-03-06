#include<iostream>

int solution(int * inputArray, int size) {
    int maxNum = 0, totalSum = 0;
    for (int i=0; i < size; i++) {
        if(maxNum < *(inputArray + i)) {
            maxNum = *(inputArray + i);
        }
        totalSum += *(inputArray + i);
    }

    /* Sum of n natural numbers (n*(n+1)/2).

      If we get totalSum - sum of first maxNum, that would be the repeated
      number 
    */
    int natualSum = (maxNum*(maxNum + 1)/2);

    return (totalSum - natualSum);
}

int main() {
    int size;
    int inputArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 7};
    // Array size
    size = sizeof(inputArray)/sizeof(inputArray[0]);

    int output = solution(inputArray, size);
    std::cout << "Repeated number is: " << output << "\n";
 }