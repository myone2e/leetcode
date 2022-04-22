#include <iostream>
#include <vector>
using namespace std;
// i++ => increase i but return the previous i value
// ++i => return increased i 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i<nums.size(); ++i){
            if (nums[i] != val){
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};