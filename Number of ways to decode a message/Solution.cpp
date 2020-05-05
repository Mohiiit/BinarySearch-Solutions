#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


int Solution::solve(string m) {
    int n = m.length();
    vector<int> dp(n+1,0);
    dp[0] = 1;
    dp[1] = 1;
    
    for(int i =2; i<=n; i++)
    {
        if(m[i-1]>'0')
        {
            dp[i] = dp[i-1];
        }
        
        if(m[i-2]=='1' || (m[i-2]=='2' && m[i-1]<'7'))
        {
            dp[i]+=dp[i-2];
        }
    }
    return dp[n];
};
