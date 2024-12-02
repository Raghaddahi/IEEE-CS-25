#include <bits/stdc++.h>
using namespace std;
int main(){
char c;cin>>c;
string s;cin>>s;
string key="qwertyuiopasdfghjkl;zxcvbnm,./";

if(c=='R'){

for(int i=0;i<s.size();i++)
{
 for(int j=0;j<key.size();j++)
 {
     int index;
     if(s[i]==key[j]) cout<<key[j-1];
 }
}
}
if(c=='L'){

for(int i=0;i<s.size();i++)
{
 for(int j=0;j<key.size();j++)
 {
     int index;
     if(s[i]==key[j]) cout<<key[j+1];
 }
}
}




 return 0;
}
