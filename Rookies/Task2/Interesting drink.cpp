#include<bits/stdc++.h>
using namespace std;
int main(){
int n,ans;cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int q;cin>>q;
sort(a,a+n);
while(q--)
{
    int m;cin>>m;
    ans=upper_bound(a,a+n,m)-a;
    cout<<ans<<endl;

}




return 0;
}
