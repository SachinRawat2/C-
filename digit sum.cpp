#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,sum=0;
cin>>n;

while(n>0){
	sum=sum + n%10; // gives the last digit of the number

	n=n/10; // removes the last digit of the number
}
cout<<sum;
return 0;
}
