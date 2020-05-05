#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


bool Solution::solve(vector<int>& nums) {
    int maxi = 0;
    if(nums.size()==1)
    {
        return true;
    }
    for(int i =0; i<nums.size(); i++)
    {
        if(nums[i]==0)
        {
            if(maxi<=i)
            {
                return false;
            }
        }
        else
        {
            maxi = max(maxi,i+nums[i]);
        }
        if(maxi>=nums.size()-1)
        {
            return true;
        }
    }
    
};
