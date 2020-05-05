#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


bool Solution::solve(string s) {
    // Write your code herejrtir
    stack<string> st;
    for(int i =0; i<s.length(); i++)
    {
        if(s.substr(i,1)=="(")
        {
            st.push("(");
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            else if(st.top()=="(")
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if(st.empty())
    {
        return true;
    }
    return false;
};
