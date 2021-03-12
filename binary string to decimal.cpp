#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        long long temp=0;
        long long power=1;
        for(int i=s.size()-1;i>=0;i--)
        {
           int d= s[i]-'0';
           temp=temp+ d*power;
           power=power*2;
        }
        cout<<temp<<endl;
    }
    return 0;


}
