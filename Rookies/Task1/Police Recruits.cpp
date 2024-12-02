#include <bits/stdc++.h>
using namespace std;
int main()
{

int n;cin >>n;

  int crimes=0;
  int officers=0;

while(n--)
{
    int num;cin>>num;
    if(num>0) officers+=num;

  else if(num==-1&&officers>0) officers--;
   else if(num==-1&&officers==0)crimes++;

}
cout<<crimes;


 return 0;
}
