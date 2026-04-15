// DFS to solve the water jug problem using recursion. prints all the steps
#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef pair<int, int> pii;
map<pii, int> Dist;	// in this case saving distance is redundant because it could be derived from the path
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
    vector<pii> neighbors;
    neighbors.push_back({0, u.second});   // empty jug 1
    neighbors.push_back({u.first, 0});    // empty jug 2
    neighbors.push_back({N, u.second});   // fill jug 1
    neighbors.push_back({u.first, M});    // fill jug 2
    neighbors.push_back({max(0, u.first - (M - u.second)), min(M, u.second + u.first)});  // pour jug 1 into jug 2
    neighbors.push_back({min(N, u.second + u.first), max(0, u.second - (N - u.first))});  // pour jug 2 into jug 1
    for (auto v: neighbors) {
        if (!Dist.count(v)) {
            Dist[v] = Dist[u] + 1;
            Parent[v] = u;
            dfs(v);
        }
    }
}

int main(){
    cin >> N >> M >> K;
    dfs({0, 0});
    return 0;
}
