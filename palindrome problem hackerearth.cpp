/*
Problem
You are given a string S.You need to check whether it's a palindrome or not. Print "YES" (without quotes) if S is a palindrome and "NO" (without quotes) if S is not a palindrome.

To know what a palindrome is you can check http://bit.ly/HashesPallindrome

INPUT First line will contain an integer T that is the number of test cases. The following T lines will contain: -A string S consisting of only lowercase letters.

OUTPUT Output YES or NO in new line for each test case.

Sample Input
1
aba
Sample Output
YES
Time Limit: 1
Memory Limit: 256
Source Limit:
*/

#include<bits/stdc++.h>
using namespace std;


bool palindrome(string s)
{
    int n=s.size();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
            return false;

    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool p=palindrome(s);
        if(p==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }

}

