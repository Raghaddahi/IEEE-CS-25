#include <bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}

int sum1=0;
int maxi=a[0];
for(int i=0;i<n;i++)
{
if(a[i]>maxi) {
        sum1=i;
maxi=a[i];

}
}

int sum2=0;
int mini=a[0];
for(int i=1;i<n;i++)
{
if(a[i]<= mini)
{sum2=i;
mini=a[i];
}
}

if(sum1>sum2) cout <<(sum1+(n-1-sum2)- 1);
else cout<<(sum1+(n-1-sum2));

    return 0;
}
