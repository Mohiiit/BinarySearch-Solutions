#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


int Solution::solve(vector<int>& arr) {
    // Write your code here
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
};
