/*
Given array a of N integers. Given Q queries
and in each query given L and R. print sum of
array elements from index L to R (L,R included).

Constraints:
1<=N<=10^5
1<=a[i]<=10^9
1<=Q<=10^5
1<=L,R<=N
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int pre[N];
int main()
{
    int n,q;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum=sum+a[i];
        pre[i]=sum;
        }
    cin>>q;
    while(q--)
    {int r,l;
        cin>>l>>r;
        cout<<pre[r]-pre[l-1]<<endl;
     }
}
