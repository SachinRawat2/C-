/*
Minimum additions:
Problem
You are given an array  of  positive integers. Your task is to add a minimum number of non-negative integers to the array such that the floor of an average of array  becomes less than or equal to .

The floor of an average of array  containing  integers is equal to . Here  is the floor function. You are given  test cases.

Input format

The first line contains a single integer  that denotes the number of test cases. For each test case:
The first line contains two space-separated integers  and  denoting the length of the array and the required bound.
The second line contains  space-separated integers denoting the integer array 
Output format

For each test case (in a separate line), print the minimum number of non-negative integers that should be added to array  such that the floor of an average of array  is less than or equal to .

Constraints


Sample Input
2
2 1
3 1
2 2
2 1
Sample Output
1
0
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
In the first test case, we have , , . The current floor of average of  is .

If we add the element  to the array, the array becomes . The floor of average of  is . Therefore, the minimum number of non-negative integers we need to add in this case is .

In the second test case, we have , , . The current floor of average of  is . Therefore, we don't need to add any non-negative integer to .
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
int main()
{
  ios_base::sync_with_stdio(false);

cin.tie(NULL);

cout.tie(NULL);

ll t;
cin>>t;
while(t--)
{
ll n,k;
cin>>n>>k;
ll sum=0;

for(ll i=0;i<n;i++)
{
  ll x;cin>>x;
  sum+=x;
}

ll p=(sum/(k+1)) + 1;

ll added_int = p-n;

if(added_int<0)
  cout<<0<<endl;
else
  cout<<added_int<<endl;
}
}