/* Prefix sum : create a new array where 
each element at index i stores the sum of 
all elements from the start of the array up to i.*/

#include <iostream>
#include <vector>

using namespace std;

// Func to compute the prefix sum
vector<int> computePrefixSum(const vector<int>& arr){
    int n = arr.size();
    vector<int> prefixSum(n);

    // 1st elm remains the same 
    prefixSum[0] = arr[0];

    // prefix sum for the rest of the elms
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    return prefixSum;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};

    vector<int> prefixSum = computePrefixSum(arr);

    cout << "Prefix sum: ";
    
    for(int i = 0; i < prefixSum.size(); i++) {
        cout << prefixSum[i] << " "; 
    }
}