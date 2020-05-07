#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;

bool check(string a, string t)
{
    for(int i =0; i<a.length(); i++)
    {
        for(int j=1; j<=a.length(); j++)
        {
            if(a.substr(i,j)==t)
            {
                return true;
            }
        }
    }
    return false;
}

bool Solution::solve(vector<vector<string>>& b, string word) {
    for(int i=0; i<b.size(); i++)
    {
        string ans = "";
        for(int j=0; j<b[i].size(); j++)
        {
            ans+=b[i][j];
        }
        if(check(ans,word))
        {
            return true;
        }
    }
    
    for(int i=0; i<b[0].size(); i++)
    {
        string ans = "";
        for(int j=0; j<b.size(); j++)
        {
            ans+=b[j][i];
        }
         if(check(ans,word))
        {
            return true;
        }
    }
    
    return false;
};
