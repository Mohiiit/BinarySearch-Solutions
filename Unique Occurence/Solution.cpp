#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


bool Solution::solve(vector<int>& nums) {
    // Write your code here
    map<int,int> m;
    for(int i=0; i<nums.size();i++)
    {
        m[nums[i]]++;
    }
    set<int>s;
    for(auto i =m.begin(); i!=m.end(); i++)
    {
        if(s.find(i->second)!=s.end())
        {
            return false;
        }
        s.insert(i->second);
    }
    return true;
};
