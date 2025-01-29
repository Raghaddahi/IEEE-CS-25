#include <bits/stdc++.h>
using namespace std;

typedef long long i64;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

vector<int> v[105], dels;
int vis[105], cost[105][105], n;

void reset() {
    memset(vis, 0, sizeof(vis));
}

int dfs(int u) {
    vis[u] = 1;
    int maxi = 0;

    for (int i = 0; i < v[u].size(); i++) {
        int nd = v[u][i];
        if (!vis[nd]) {
            int total = cost[u][nd] + dfs(nd);
            maxi = max(total, maxi);
        }
    }
    return maxi;
}

int main() {
    reset();
    int a, b, c;

    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        cin >> a >> b >> c;
        cost[a][b] = c;
        cost[b][a] = c;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    cout << dfs(0) << endl;
    return 0;
}
