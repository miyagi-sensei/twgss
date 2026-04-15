#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

typedef pair<int, int> pii;
map<pii, vector<pii>> Graph;
set<pii> Visited;
map<pii, pii> Parent;
int N, M, K;

void bfs(pii start) {
	vector<pii> queue;
	queue.push_back(start);
	int head = 0;
	while (head < queue.size()) {
		pii u = queue[head];
		head++;
		for (auto v : Graph[u]) {
			if (Visited.count(v))
				continue;
			
			Parent[v] = u;
			queue.push_back(v);
			Visited.insert(v);
			if (v.first == K || v.second == K) {	// destination reached
				vector<pii> path;	// backtrace the path to get here and print it
				for (; v != start; v = Parent[v])
					path.push_back(v);
				for (int i = path.size() - 1; i >= 0; i--)
					cout << path[i].first << " " << path[i].second << endl;
				cout << path.size() << endl;
				return;
			}
		}
	}
}

int main() {
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
	bfs({0, 0});
	return 0;
}
