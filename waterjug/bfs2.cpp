// BFS to solve the water jug problem. only prints the length of shortest path
#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef pair<int, int> pii;
map<pii, int> Dist;
int N, M, K;

int main(){
    cin >> N >> M >> K;
    pii start = {0, 0};
    Dist[start] = 0;
    vector<pii> queue;
    queue.push_back(start);
    int head = 0;
    while (head < queue.size()){
        pii u = queue[head];
        head++;
        vector<pii> next_states;
        next_states.push_back({0, u.second});
        next_states.push_back({u.first, 0});
        next_states.push_back({N, u.second});
        next_states.push_back({u.first, M});
        next_states.push_back({max(0, u.first - (M - u.second)), min(M, u.second + u.first)});
        next_states.push_back({min(N, u.second + u.first), max(0, u.second - (N - u.first))});
        for (auto v: next_states){
            if (Dist.find(v) == Dist.end()) {
                Dist[v] = Dist[u] + 1;
                queue.push_back(v);
            }
            if (v.first == K || v.second == K) {
                cout << Dist[v] << endl;
                return 0;
            }
        }
    }
  cout << -1 << endl;
  return 0;
}
