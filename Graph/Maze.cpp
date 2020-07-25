#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
int n , m ,k ;
char maze[501][501];
bool vis[501][501];
 
void dfs(int x , int y){
    if(x>=1 && x<=n && y>=1 && y<=m && !vis[x][y] && maze[x][y]=='.'){
        vis[x][y] = true;
        dfs(x+1,y);
        dfs(x-1,y);
        dfs(x,y-1);
        dfs(x,y+1);
        if(k>0){
            maze[x][y]='X';
            k--;
        }
    }
}
 
int main(){
    fastIO;
    cin>>n>>m>>k;
    int start_x , start_y;
    for(int i = 1 ; i<=n ;i++){
        for(int j = 1 ; j<=m ; j++){
            cin>>maze[i][j];
            if(maze[i][j]=='.'){
                start_x = i,start_y = j;
            }
        }
    }
    dfs(start_x,start_y);
    for(int i = 1 ; i<=n ;i++){
        for(int j = 1 ; j<=m ; j++){
            cout<<maze[i][j];
        }
        cout<<"\n";
    }
}