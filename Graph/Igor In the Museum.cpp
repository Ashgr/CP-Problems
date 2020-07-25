#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
int n,m,q,r,c,pics,t;
char G[1001][1001];
int vis[1001][1001];
int entered[1000005];
 
void dfs(int r , int c){
    if(r>=1 && r<=n && c>=1 && c<=m && G[r][c] == '.' && !vis[r][c]){
        vis[r][c] = t;
        if(G[r+1][c]=='*')pics++;
        if(G[r-1][c]=='*')pics++;
        if(G[r][c+1]=='*')pics++;
        if(G[r][c-1]=='*')pics++;
 
        dfs(r,c+1);
        dfs(r,c-1);
        dfs(r+1,c);
        dfs(r-1,c);
    }
}
 
int main(){
    fastIO;
    cin>>n>>m>>q;
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1; j<=m ; j++){
            cin>>G[i][j];
        }
    }
    while(q--){
        t++;
        pics = 0;
        cin>>r>>c;
        if(!vis[r][c])dfs(r,c);
        else{
            pics = entered[vis[r][c]];
        }
            entered[t] = pics;
        cout<<pics<<"\n";
    }