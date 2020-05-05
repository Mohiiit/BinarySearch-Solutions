#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


string Solution::solve(string a, string b) {
    // Write your code here
    string ans = "";
    int m = max(a.length(), b.length());
    int x = a.length();
    int y = b.length();
    for(int i =0; i<(m-x); i++)
    {
        a = "0"+a;
    }
    for(int i =0; i<(m-y); i++)
    {
        b = "0"+b;
    }
    string prev = "0";
    for(int i =a.length()-1; i>=0; i--)
    {
        int count = 0;
        if(prev=="1")
        {
            count++;
        }
        if(a.substr(i,1)=="1")
        {
            count++;
        }
        if(b.substr(i,1)=="1")
        {
            count++;
        }
        if(count==3)
        {
            ans = "1"+ans;
            prev = "1";
        }
        if(count==2)
        {
            ans = "0"+ans;
            prev = "1";
        }
        if(count==1)
        {
            ans = "1"+ans;
            prev= "0";
        }
        if(count==0)
        {
            ans = "0"+ans;
            prev=  "0";
        }
    }
    if(prev=="1")
    {
        ans = "1"+ans;
    }
    
    return ans;
};
