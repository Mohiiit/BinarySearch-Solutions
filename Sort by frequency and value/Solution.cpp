#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


vector<int> Solution::solve(vector<int>& nums) {
    map<int,int> m;
    for(int i =0; i<nums.size(); i++)
    {
        m[nums[i]]++;
    }
    priority_queue<pair<int,int>> pq;
    for(auto i =m.begin(); i!=m.end(); i++)
    {
        pq.push(make_pair(i->second,i->first));
    }
    vector<int>ans;
    while(!pq.empty())
    {
        pair<int,int> t = pq.top();
        int fi = t.first;
        int se = t.second;
        for(int i =0; i<fi; i++)
        {
            ans.push_back(se);
        }
        pq.pop();
    }
    return ans;
    
};
