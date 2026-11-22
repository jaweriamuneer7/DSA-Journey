#include<iostream>
#include<vector>


std::vector<int> pairSum(std::vector<int> nums, int target) {
    std::vector<int> ans;
    for(int i =0; i<nums.size(); i++) {
        for(int j = i+1; j<nums.size(); j++) {
            if((nums[i]+nums[j]==target)) {
                // as i and j are indices so we will have the index of those \
                // numbers whose sum equals to target so for target 10 we will have index 2 and 4
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        } 
    }

    return ans;

}
int main() {
    std::vector<int> nums = {1,2, 4, 5,6};
    int target = 10;

    std::vector<int> ans = pairSum(nums, target);
    // as ans vector will have always a pair so we are directly calling by [0] and [1]
    std::cout << ans[0] << ", " << ans[1];

    return 0;


}    