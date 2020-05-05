#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


bool Solution::solve(int num) {
    string s = to_string(num);
    string r = s;
    reverse(r.begin(),r.end());
    return (r==s);
};
