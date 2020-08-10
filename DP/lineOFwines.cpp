#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define forN(i, n) for(int i = 1; i <=n ; ++i)
#define endl "\n"

typedef long long ll;
using namespace std;
const ll INF = 1e15;
const int N = 300;
ll A[N],DP[N][N],n;

int calc(int l , int r){
    if (l > n || r < 1 || l > r)return 0;
    if (DP[l][r]!=-1)return DP[l][r];
    int left = calc(l+1,r) + (n-(r-l))*A[l];
    int right = calc(l,r-1) + (n-(r-l))*A[r];
    return DP[l][r] = max(left , right);
}
int main(){
    fastIO;
    cin>>n;
    forN(i,n)cin>>A[i];
    memset(DP,-1,sizeof DP);
    cout<<calc(1,n);
    return 0;
}
