#include <iostream>
#include <vector>

using namespace std;

class NumArray {
public:
    vector<int>& preSum;
    NumArray(vector<int>& nums) : preSum(nums) {
        for (int i = 1; i < preSum.size(); i++) {
            preSum[i] += preSum[i - 1];
        } 
    }

    int sumRange(int l, int r) {
        if (l == 0) return preSum[r];
        return preSum[r] - preSum[l- 1];
    }
};

int main() {
vector<int> nums = {1, 2, 3, 4, 5};
NumArray obj(nums);

cout << "sum from 1 to 4: " << obj.sumRange(0, 4);
}

/*  to run:
    g++ -o rngSum RangeSumQuery.cpp
    ./rngSum 
*/ 