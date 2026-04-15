#include <iostream>
using namespace std;

int N = 5;
pair< pair<int, int>, int> Edges[7];
int Graph[6][6];

int main(){
    // set up the graph
    Edges[1] = {{1, 2}, 1};
    Edges[2] = {{1, 4}, 1};
    Edges[3] = {{2, 4}, 1};
    Edges[4] = {{2, 5}, 1};
    Edges[5] = {{3, 1}, 1};
    Edges[6] = {{4, 3}, 1};
    Edges[6].first.first = 5; // sets "from" of 6th edge

    // print it out in Matrix
    for (int i=0; i<7; i++) {
        int u = Edges[i].first.first;
        int v = Edges[i].first.second;
        Graph[u][v] = 1;
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