#include <iostream>
using namespace std;

int N = 5;
vector<int> Adj[6];
int Graph[6][6];

int main(){
    // set up the graph
    Adj[1].push_back(2);
    Adj[1].push_back(4);
    Adj[2].push_back(4);
    Adj[2].push_back(5);
    Adj[3].push_back(1);
    Adj[5].push_back(3);

    // print it out in Matrix
    for (int u=1; u<=N; u++) {
        for (auto v: Adj[u]) {
            Graph[u][v] = 1;
        }
    }
    int u, v;
    cout << "   ";
    for (v=1; v<=N; v++)
        cout << v << " ";
    cout << endl << "   ";
    for (v=1; v<=N; v++)
        cout << "--";
    cout << endl;
    for (u=1; u<=N; u++) {
        cout << u << " |";
        for (v=1; v<=N; v++) {
            cout << Graph[u][v] << " ";
        }
        cout << endl;
    }
    return 0;
}