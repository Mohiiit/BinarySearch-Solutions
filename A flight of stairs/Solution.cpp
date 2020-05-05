#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


int Solution::solve(int n) {
    if(n==1 || n==0)
    {
        return 1;
    }
    int a = 1;
    int b = 1;
    int m = 1000000007;
    for(int i =2; i<=n; i++)
    {
        int t = b;
        b+=a;
        a=t;
        b%=m;
    }
    return b;
};
