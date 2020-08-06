#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;

const int nax = 1e5 + 5;
vector<int> edges[nax];
int in_degree[nax]; // the number of edges going to 'b'
int dist[nax];
bool visited[nax];

void dfs(int a) {
        visited[a] = true;
        for(int b = 0 ; b<edges[a].size();b++) {
            if(!visited[edges[a][b]])dfs(edges[a][b]);
            dist[a] = max(dist[a],dist[edges[a][b]]+1);
        }

}

int main() {
    int n, m;
    cin>>n>>m;
    while(m--) {
        int a, b;
        cin>>a>>b;
        edges[a].push_back(b);
    }
    for(int i = 1; i <= n; ++i) {
        if(!visited[i]) {
            dfs(i);
        }
    }
    int answer = 0;
    for(int i = 1; i <= n; ++i) {
        answer = max(answer, dist[i]);
    }
    cout<<answer;
}
