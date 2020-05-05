#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


vector<int> Solution::solve(vector<int>& nums) {
    vector<int>ans;
    int num = 1;
    int z = 0;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]==0)
        {
            z++;
        }
        else
        {
            num*=nums[i];
        }
    }
    if(z>1)
    {
        for(int i =0; i<nums.size(); i++)
        {
            ans.push_back(0);
        }
        return ans;
    }
    if(z==1)
    {
        for(int i =0; i<nums.size(); i++)
        {
            if(nums[i]==0)
            {
                ans.push_back(num);
            }
            else
            {
                ans.push_back(0);
            }
        }
        return ans;
    }
    for(int i =0; i<nums.size(); i++)
    {
        ans.push_back(num/nums[i]);
    }
    return ans;
};
