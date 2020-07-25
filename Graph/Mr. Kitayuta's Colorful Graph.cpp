#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
int n,m,q,a,b,c,u,v;
vector<pair<int,int>> G[101];
bool vis[101];
 
bool dfs(int u , int v , int clr){
    vis[u] = true;
    if(u==v)return true;
    for(int i = 0 ; i<G[u].size() ; i++){
        if(G[u][i].second == clr && !vis[G[u][i].first]){
            if(dfs(G[u][i].first,v,clr))return true;
        }
    }
    return false;
}
 
int main(){
    fastIO;
    cin>>n>>m;
    for(int i = 0 ; i<m ; i++){
        cin>>a>>b>>c;
        G[a].pb(mp(b,c));
        G[b].pb(mp(a,c));
    }
    cin>>q;
    while(q--){
        cin>>u>>v;
        int ans = 0;
        for(int i = 1 ; i <=100 ; i++){
            memset((vis),false,101);
            if(dfs(u,v,i))ans++;
        }
        cout<<ans<<"\n";
    }
}