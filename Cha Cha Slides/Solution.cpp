#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


bool Solution::solve(string s0, string s1) {
    // Write your code here
    string a = "";
    int mark = -1;
    if(s0.length()!=s1.length())
    {
        return false;
    }
    for(int i =0; i<s1.length(); i++)
    {
        if(s1.substr(i,1)==s0.substr(0,1))
        {
            mark = i;
            a = s1.substr(mark,s1.length()-mark) + s1.substr(0,mark);
            if(a==s0)
            {
                return true;
            }
        }
    }
    return false;
};
