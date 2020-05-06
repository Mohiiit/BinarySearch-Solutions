#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


string Solution::solve(string s) {
    // Write your code here
    string ans = "";
    for(int i =1; i<s.length(); i++)
    {
        if(s.substr(i,1)!=s.substr(i-1,1))
        {
            ans+=s.substr(i-1,1);
        }
    }
    ans+=s.substr(s.length()-1,1);
    return ans;
};
