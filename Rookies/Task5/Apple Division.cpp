#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;
int n;
ll solve(ll group1,ll group2, vector<ll> &weight,int i) {
    if (i == n) {
        return abs(group1 - group2);
    }
return min(solve(group1+weight[i],group2,weight,i+1),
            solve(group1,group2+weight[i],weight,i+1));
}

int main() {
Fast
 n;
cin >> n;
vector<ll> weight(n);
for (int i = 0; i < n; i++) {
        cin >> weight[i];

 }
cout << solve(0, 0, weight, 0) <<endl;
return 0;
}

