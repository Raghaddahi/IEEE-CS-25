#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;
ll n;
void solve(ll n) {
    cout<<n<<" ";
    if (n == 1)  return;
    if(n%2==0) solve(n/2);
    else solve(3*n+1);

}

int main() {
Fast
 n;
cin >> n;

 solve(n);
 cout<<endl;
return 0;
}
