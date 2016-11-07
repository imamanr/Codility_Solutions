#include <numeric>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    int i;
    int len = A.size();
    int sum = 0;
    int leftSum = 0;
    int rightSum=0;

    for (i = 0; i < len; i++) {
        sum += A[i];
    }

    for (i = 0; i < len; i++) {
        rightSum = sum - leftSum - A[i];

        if (leftSum == rightSum) {
            return i;
        }

        leftSum += A[i];
    }

    return -1;
}


