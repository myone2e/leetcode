#include <iostream>
#include <vector>


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int count = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[count]) nums[++count] = nums[i]; // ++i => return increased i 
            // i++ => increase i but return the previous i value
        }
        return count+1;
    }
};