#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;
bool Solution::solve(string s) {
    
// Write your code here
    stack<string>st;
    int n = s.length();
    for(int i =0; i<n; i++)
    {
        string a = s.substr(i,1);
        if(a=="(" || a=="{" || a=="[")
        {
            st.push(a);
        }
        else if(a==")")
        {
            if(st.empty() || st.top()!="(")
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
        else if(a=="]")
        {
            if(st.empty() || st.top()!="[")
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
        else if(a=="}")
        {
            if(st.empty() || st.top()!="{")
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    if(st.empty())
    {
        return true;
    }
    return false;
};
