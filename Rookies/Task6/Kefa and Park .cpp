#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pp;

const ll Size = 100010;
const ll inf = 1000000000000;

vector<ll> adj[Size];
bool vis[Size];
ll n, m, total = 0;
ll cc[Size];

void dfs(ll s, ll sum) {
    if (vis[s]) return;

    vis[s] = true;

    if (cc[s])
        sum++;
    else
        sum = 0;

    if (sum > m) return;

    if (s != 1 && adj[s].size() == 1) {
        total++;
    }

    for (size_t i = 0; i < adj[s].size(); i++) {
        dfs(adj[s][i], sum);
    }
}

int main() {
    ll u, v;

    memset(vis, 0, sizeof(vis));

    cin >> n >> m;

    for (ll i = 1; i <= n; i++)
        cin >> cc[i];

    for (ll i = 0; i < n - 1; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);

    cout << total;

    return 0;
}
