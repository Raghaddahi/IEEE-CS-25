#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int n,m;
cin>>n>>m;
int books[n];
for(int i=0;i<n;i++)
{
    cin>>books[i];
}
ll r=0,l=0;
ll sum=0,ans=0;
while(r<n)
{
    sum+=books[r];
    while(sum>m)
    {
        sum-=books[l];
        l++;
    }
    ans=max(ans,r-l+1);
    r++;
}

cout<<ans<<endl;
    return 0;
}
