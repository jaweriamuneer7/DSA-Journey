#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> freq;
       int n = nums.size();
       int floorVal = (n/2);
       for(int i=0; i<n; i++) {
           freq[nums[i]]++;
           if(freq[nums[i]]>floorVal) {
               return nums[i];
           }
       }

       return -1;
        
    }
};