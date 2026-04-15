// construct the graph first and then do DFS
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

typedef pair<int, int> pii;
map<pii, vector<pii>> Graph;
set<pii> Visited;
map<pii, pii> Parent;
int N, M, K;

void dfs(pii u) {
    if (u.first == K || u.second == K) {
        vector<pii> path;
        pii start = {0, 0};
        for (; u != start; u = Parent[u])
            path.push_back(u);
        for (int i=path.size()-1; i>=0; i--)
            cout << path[i].first << " " << path[i].second << endl;
        exit(0);
    }
    for (auto v: Graph[u]) {
        if (!Visited.count(v)) {
            Parent[v] = u;
            Visited.insert(v);
            dfs(v);
        }
    }
}

int main(){
    int u, v;
    cin >> N >> M >> K;
    // graph construction
    for (u=0; u<=N; u++) {
        for (v=0; v<=M; v++) {
            Graph[{u, v}].push_back({0, v});    // empty jug 1
            Graph[{u, v}].push_back({u, 0});    // empty jug 2
            Graph[{u, v}].push_back({N, v});    // fill jug 1
            Graph[{u, v}].push_back({u, M});    // fill jug 2
            Graph[{u, v}].push_back({max(0, u - (M-v)), min(M, v + u)});    // pour from jug 1 to jug 2
            Graph[{u, v}].push_back({min(N, u+v), max(0, v - (N - u))});    // pour from jug 2 to jug 1
        }
    }
    dfs({0, 0});
    return 0;
}
