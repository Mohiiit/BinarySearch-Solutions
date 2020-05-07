#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Solution::solve(vector<int>& nums) {
    // Write your code here
    vector<vector<int>>ans;
    int prev = -1;
    vector<int>temp;
    if(nums.size()==0)
    {
        return ans;
    }
    for(int i =0; i<nums.size(); i++)
    {
        if(temp.size()!=0 && nums[i]!=prev)
        {
            ans.push_back(temp);
            temp.clear();
        }
        temp.push_back(nums[i]);
        prev = nums[i];
    }
    ans.push_back(temp);
    return ans;
};
