#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
sort(arr.begin(), arr.end());
int ans=0;
int r=0; int l=0;
while(r<n)
{
    while(r<n&&arr[r]-arr[l]<=5)
    {
        r++;
    }
    ans=max(ans,r-l);
    l++;

}

cout<<ans;

return 0;
}
