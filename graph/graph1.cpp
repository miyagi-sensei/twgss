#include <iostream>
using namespace std;

int Graph[6][6] = 
{   {0,0,0,0,0,0},
    {0,0,1,0,1,0},
    {0,0,0,0,1,1},
    {0,1,0,0,0,0},
    {0,0,0,0,0,0},
    {0,0,0,1,0,0}};
int N = 5;

int main(){
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