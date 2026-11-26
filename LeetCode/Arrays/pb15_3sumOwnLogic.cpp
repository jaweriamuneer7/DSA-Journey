#include<iostream>
#include<vector>
#include<algorithm>

std::vector<std::vector<int>> threeSome(std::vector<int> nums) {
    std::vector<int> innerVec;
    int fixed, start, end;
    int sum;
    int n = nums.size();
    fixed = 0;
    start = 1;
    end = n-1;
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int>> outerVect;
    for(int i=0; i<=end; i++) {
        
        sum = nums[fixed]+nums[start]+nums[end];
        if(sum==0) {
            innerVec.push_back(nums[fixed]);
            innerVec.push_back(nums[start]);
            innerVec.push_back(nums[end]); 
            outerVect.push_back(innerVec);
            start++;
            end--;
                
        }
        else if(sum<0) {
            start++;
        }
        else if(sum>0) {
            end--;
        }
      
    }
    
    return outerVect;

}
int main( ) {
    


} 