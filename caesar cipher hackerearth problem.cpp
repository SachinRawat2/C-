/*
Problem
Caesar's Cipher is a very famous encryption technique used in cryptography. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, with a shift of 3, D would be replaced by G, E would become H, X would become A and so on.

Encryption of a letter X by a shift K can be described mathematically as  % .

Given a plaintext and it's corresponding ciphertext, output the minimum non-negative value of shift that was used to encrypt the plaintext or else output  if it is not possible to obtain the given ciphertext from the given plaintext using Caesar's Cipher technique.

Input:

The first line of the input contains Q, denoting the number of queries.

The next Q lines contain two strings S and T consisting of only upper-case letters.

Output:

For each test-case, output a single non-negative integer denoting the minimum value of shift that was used to encrypt the plaintext or else print  if the answer doesn't exist.

Constraints:

Sample Input
2
ABC
DEF
AAA
PQR
Sample Output
3
-1
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
In the first test case, A is replaced by D, B by E and C by F. It is easy to make out that a shift of 3 has been used for encrypting the plain text.

In the second test case, the value of the shift is not consistent for all letters of the plain text. Thus, we can safely come to the conclusion that the plain text has not been encrypted using Caesar's Cipher. Hence, the answer is no.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
int q;
cin>>q;
while(q--){
    string s,t;
    cin>>s>>t;

set<int>c;

for(int i=0;i<s.length();i++)
{
    c.insert(abs((s[i]>t[i] ? 26:0)-(s[i]-t[i])   ));
}
set<int>::iterator it= c.begin();
if(c.size()==1)
cout<<*it;
else
cout<<-1;

}
}
