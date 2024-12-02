#include <bits/stdc++.h>
using namespace std;
bool lucky (int n)
{
    while(n>0)
    {
        int d=n%10;
        if(d!=7&&d!=4) return 0;
        n/=10;

    }
    return 1;
}


int main()
{

int n;cin >>n;
for(int i=4;i<=n;i++)
{
    if(lucky(i)&&n%i==0)
    {
        cout<<"YES";
        return 0;
    }
}
cout<<"NO";
 return 0;
}
