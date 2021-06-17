/*Monk and Inversions
Monk's best friend Micro, who happen to be an awesome programmer, got him an integer matrix M of size  for his birthday. Monk is taking coding classes from Micro. They have just completed array inversions and Monk was successful in writing a program to count the number of inversions in an array. Now, Micro has asked Monk to find out the number of inversion in the matrix M. Number of inversions, in a matrix is defined as the number of unordered pairs of cells  such that .
Monk is facing a little trouble with this task and since you did not got him any birthday gift, you need to help him with this task.

Input:
First line consists of a single integer T denoting the number of test cases.
First line of each test case consists of one integer denoting N. Following N lines consists of N space separated integers denoting the matrix M.

Output:
Print the answer to each test case in a new line.

Constraints:



Sample Input
2
3
1 2 3
4 5 6
7 8 9
2
4 3
1 4
Sample Output
0
2
Explanation
In first test case there is no pair of cells , ,  having , so the answer is 0.
In second test case  and , so the answer is 2.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}int count =0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				for(int x=i;x<n;x++)
				{
					for(int y=j;y<n;y++)
					{
						if(a[i][j]>a[x][y])
							count++;
				}
			}
		}
	}

	cout<<count<<endl;
}}