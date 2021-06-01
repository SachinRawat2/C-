/*
Minimum operations
Problem
You are given an array  of length  and can perform the following operation on the array:

Select a subarray from array  having the same value of elements and decrease the value of all the elements in that subarray by any positive integer .
Find the minimum number of operations required to make all the elements of array  equal to zero.

Input format

The first line contains an integer  denoting the number of elements in the array.
The next line contains space-separated integers denoting the elements of array .
Output format

Print the minimum number of operations required to make all the elements of array  equal to zero.

Constraints


Sample Input
5
2 2 1 3 1
Sample Output
4
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
 Operation , choose subarray [5,5] and x = 1.
Array  becomes 
 Operation , choose subarray [3,3] and x = 1.
Array  becomes 
 Operation , choose subarray [1,2] and x = 2.
Array  becomes 
 Operation , choose subarray [4,4] and x = 3.
Array  becomes 
Hence, minimum  operations are required.

*/



#include <bits/stdc++.h>
using namespace std;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int count=0;
for(int i=0;i<n;i++)
{
	if(a[i]!=a[i+1])
		count++;
}

cout<<count<<endl;
}