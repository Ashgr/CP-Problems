#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;

const int N = 100;
int n,m , MAT[N][N],DP[N][N];

int calc(int i , int j){
    if(i >= n || j >= m){
        return 1e9;
    }
    if(i == n-1 && j == n-1){
        return MAT[i][j];;
    }
    if(DP[i][j]!=-1) return DP[i][j];
    int path_A = calc(i+1,j) + MAT[i][j];
    int path_B = calc(i,j+1) + MAT[i][j];
    return DP[i][j] = min(path_A,path_B);
}

int main(){
    fastIO;
    cin>>n>>m;
    memset(DP,-1,sizeof DP);
    for(int i = 0 ; i<n ;i++){
        for (int j = 0 ; j<m ; j++){
            cin>>MAT[i][j];
        }
    }
    cout<<calc(0,0);
}

