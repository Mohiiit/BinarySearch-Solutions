#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;
int Solution::solve(vector<int>& arr) {
    
//sort(arr.begin(), arr.end());
   if(arr[0]==0)
   {
       for(int i =0; i<arr.size(); i++)
       {
           if(arr[i]!=i)
           {
               return i;
           }
       }
       return arr.size();
   }
   else
   {
       for(int i =0; i<arr.size(); i++)
       {
           if(arr[i]!=i+1)
           {
               return i+1;
           }
       }
       return arr.size()+1;
   }
};
