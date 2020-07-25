#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
const int N = 1e5 + 5 ;
ll n , w, DP[101][N];
pair<ll,ll>items[101];
 
ll calc(int idx,ll weight){
    if (weight > w){
        return - 1e15;
    }
    if (idx == n){
        return 0;
    }
 
    if (DP[idx][weight]!=-1)return DP[idx][weight];
    ll take = calc(idx + 1 , weight + items[idx].first) + items[idx].second;
    ll dont = calc(idx + 1 , weight);
    return DP[idx][weight] = max(take,dont);
}
 
int main(){
    fastIO;
    cin>>n>>w;
    memset(DP,-1,sizeof DP);
    for(int i = 0 ; i<n ; i++){
        cin>>items[i].first>>items[i].second;
    }
    cout<<calc(0,0);
}