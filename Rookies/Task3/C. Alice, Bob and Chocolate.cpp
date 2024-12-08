#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
ll a=0; ll b=n-1;
ll cntra=0;
ll cntrb=0;
int asum=arr[a];
int bsum=arr[b];
while(a<=b)
{
    if(asum<=bsum)
    {
        cntra++;
        asum+=arr[++a];
    }
    else
    {
        bsum+=arr[--b];
        cntrb++;
    }

}
cout<<cntra<<" "<<cntrb;
return 0;}
