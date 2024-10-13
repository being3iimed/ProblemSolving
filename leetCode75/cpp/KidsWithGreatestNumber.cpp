#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
    vector<bool> KidsWithCandies(vector<int>& candies, int ExtraCandies) {
        vector<bool> result(candies.size());

        for (int i = 0; i < candies.size(); i++) {
            bool canHaveMaxCandies = true;

            for (int j = 0; j < candies.size(); j++) {
                if ((candies[i] + ExtraCandies) < candies[j]) {
                    canHaveMaxCandies = false;
                }
            }
            result[i] = canHaveMaxCandies;
        }
    return result;
    }

};

int main() {

    Solution sol;
    vector<int> candies1 = {2, 3, 5, 4, 1};
    int extraCandies1 = 3;

    vector<bool> result1 = sol.KidsWithCandies(candies1, extraCandies1);

    for (bool val : result1) {
    cout << (val ? "true" : "false") << " ";
    }
}