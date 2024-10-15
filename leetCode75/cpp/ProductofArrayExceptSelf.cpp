#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size(), 1);
        int left = 1;
        int right = 1;

        for (int i = 0; i < nums.size(); i++){
                answer[i] *= left;
                left *= nums[i];
            }
        for (int i = nums.size() - 1; i >= 0; i--){
                answer[i] *= right;
                right *= nums[i];
            }
        return answer;
    }
};
/