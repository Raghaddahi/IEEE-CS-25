#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int fibo(ll n) {
    if(n==0) return 0;
    if(n==1) return 1;
    return fibo(n-1)+fibo(n-2);

}

int main() {
Fast
 ll n;
cin >> n;


 cout<<fibo(n)<<endl;
return 0;
}
