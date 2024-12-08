#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
 int t;cin >> t;
while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> arr(n);
       for(auto& i:arr) cin >> i;

        sort(arr.begin(),arr.end());
        ll ans=0;
for(int i=0;i<n;i++)
{
    int ans1=lower_bound(arr.begin()+i+1,arr.end(),l-arr[i])-arr.begin();
    int ans2=upper_bound(arr.begin()+i+1,arr.end(),r-arr[i])-arr.begin();

    ans+=ans2-ans1;
}
    cout<<ans<<endl;
    }
    return 0;
}
