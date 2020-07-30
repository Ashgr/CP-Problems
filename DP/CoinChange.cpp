#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
const int N = 500;
ll n , m , C[55],DP[N][N];
ll calc(ll M,ll X){
    if (X == 0)return 1;
    if (X<0)return 0;
    if (M<=0 && X>=1)return 0;
    if (DP[M][X]!=-1)return DP[M][X];
    return DP[M][X] = calc(M-1,X) + calc(M,X-C[M-1]);
}

int main(){
    fastIO;
    cin>>n>>m;
    for(int i = 0 ; i<m ; i++){
        cin>>C[i];
    }
    memset(DP,-1,sizeof DP);
    cout<<calc(m,n);
}

