#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,t;
cin>>n>>t;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
 int l=0;int r=0;int sum=0;
 int ans=0;
 while(r<n)
 {
     while(r<n&&(a[r]+sum)<=t)
     {
         sum+=a[r];
         r++;
     }
     ans=max(ans,r-l);
     sum-=a[l];
     l++;

 }
cout<<ans<<endl;



    return 0;
}
