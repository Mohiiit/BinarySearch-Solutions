#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


bool Solution::solve(string s1, string s2) {
    // Write your code hererhi
    int i =0;
    int j =0;
    int match = 0;
    while(i<s1.length() && j<s2.length())
    {
        if(s1.substr(i,1)!=s2.substr(j,1))
        {
            j++;
        }
        else
        {
            i++;
            j++;
            match++;
        }
    }
    if(i==s1.length())
    {
        return true;
    }
    return false;
};
