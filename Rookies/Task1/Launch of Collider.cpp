#include <bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
string s;cin>>s;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
int mintime=INT_MAX;
bool flag=0;
for(int i=0;i<n-1;i++)
{
    if(s[i]=='R'&&s[i+1]=='L')
    {flag=1;
        int time=(a[i+1]-a[i])/2;
        mintime=min(mintime,time);
    }

}
if(flag==1) cout<<mintime;
else cout<<-1;



 return 0;
}
