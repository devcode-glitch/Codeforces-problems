#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];
 
    // build adjacency list: vessel i -- h[i] -- vessel (i+1)%n
    vector<array<pair<int,long long>,2>> adj(n);
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        adj[i][0] = {j, h[i]};
        adj[j][1] = {i, h[i]};
    }
 
    for (int l = 0; l < n; l++) {
        // modified Dijkstra: minimize the MAX edge weight on path from l
        vector<long long> dist(n, LLONG_MAX);
        dist[l] = 0; // l itself stays 0 (forced empty)
        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;
        pq.push({0, l});
 
        while (!pq.empty()) {
            auto [d, u] = pq.top(); pq.pop();
            if (d > dist[u]) continue;
            for (auto &[v, w] : adj[u]) {
                long long nd = max(d, w); // minimax relaxation
                if (nd < dist[v]) {
                    dist[v] = nd;
                    pq.push({nd, v});
                }
            }
        }
 
        long long total = 0;
        for (int i = 0; i < n; i++) {
            if (i != l) total += dist[i];
        }
        cout << total << " ";
    }
    cout << "
";
}
 
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}