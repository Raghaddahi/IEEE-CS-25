#include <bits/stdc++.h>
using namespace std;
 #define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
 typedef long long ll;
typedef long double ld;
 vector<vector<int>> ss;
vector<bool> used;
vector<int> ans;
 void dfs(int node)
{
    used[node] = true;
    for (auto chield : ss[node])
        if (!used[chield])
            dfs(chield);
}
 void solve()
{
    int n, m;
    cin >> n >> m;
 used.resize(n + 1);
    ss.resize(n + 1);
 for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }
 for (int i = 1; i <= n; i++)
        if (!used[i])
        {
            ans.push_back(i);
            dfs(i);
        }
    cout << (ans.size() < 2 ? 0 : ans.size() - 1) << endl;
    if (ans.size() >= 2)
        for (int i = 1; i <= ans.size() - 1; i++)
            cout << ans[0] << " " << ans[i] << endl;
}
 int main()
{
    ios_b;
#ifdef _DEBUG
#endif
    solve();
    return 0;
}
