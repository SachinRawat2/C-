/*Given an array with n itegers your task is to check if it could become non- decreasing by modifying
at most 1 element .


*/



#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
{if(a[i]<=a[i+1])
{cout<<"True";
break;}
else if(a[i]>a[i+1]&&a[i+1]<=a[i+2] || a[i]<=a[i+1]&&a[i+1]>a[i+2])
{
    cout<<"True";
    break;
}
else
    cout<<"False";
    break;
}
}

