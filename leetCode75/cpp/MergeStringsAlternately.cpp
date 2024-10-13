#include <iostream>
#include <string>

using namespace std;

class Solution{
    public:
    string mergeAlternately(string word1, string word2){
        string merged;

        for (int i = 0; i < max(word1.length(), word2.length()); i++) {
            
            if( i < word1.length()){
                merged += word1[i];
            }

            if( i < word2.length()){
                merged += word2[i];
            }
        }

        return merged;
    
    }
};

int main() {

    Solution sol;
    string w1 = "abc";
    string w2 = "qsd";


    cout << sol.mergeAlternately(w1,w2);
}

// g++ -o ma MergeStringsAlternately.cpp 
// ./ma