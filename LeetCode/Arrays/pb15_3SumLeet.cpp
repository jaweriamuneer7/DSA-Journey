#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int fixed,st,end,sum;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> outVect;
        for(fixed = 0; fixed<n-2; fixed++) {
            if(fixed>0 && nums[fixed]==nums[fixed-1])
                continue;
            st = fixed+1;
            end = n-1;
            while(st<end) {
                sum = nums[fixed]+nums[st]+nums[end];
                if(sum==0) {
                    vector<int> iV;
                    iV.push_back(nums[fixed]);
                    iV.push_back(nums[st]);
                    iV.push_back(nums[end]);
                    outVect.push_back(iV);
                    st++;
                    end--;

                    while(st<end && nums[st]==nums[st-1])
                        st++;
                    while(st<end && nums[end]==nums[end+1])
                        end--;


                }
                else if(sum<0) {
                    st++;
                }
                else if(sum>0){
                    end--;
                }


            }


        }

        return outVect;
            
        
    }
};