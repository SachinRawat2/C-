/*
Given a number N. Print its factorial
Constraints : 1<=N <=100

print answer module M where M =47

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int M=47;
    long long fact=1;
    for (int i=2;i<=n;i++){
        fact = (i*fact)%M;
    }
    cout<<fact;
}
