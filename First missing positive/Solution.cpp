#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


int Solution::solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i =0; i<nums.size()-1; i++)
    {
        if(nums[i]+1!=nums[i+1] && nums[i]+1>0)
        {
            return nums[i]+1;
        }
    }
    if(nums[nums.size()-1]+1<=0)
    {
       return 1;
    }
    return nums[nums.size()-1]+1;
};
