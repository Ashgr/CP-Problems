#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
const int N = 1e5 + 5;

ll t , n , B[N], DP[N][1000];

ll calc(int idx , int pre_val){
    if (idx > n) return 0;
    ll top , down ;
    if (DP[idx][pre_val]!=-1)return DP[idx][pre_val];
    if (idx == 1){
        top = calc(idx+1 , B[idx]);
        down = calc(idx+1 , 1);
    }
    else{
        top = calc(idx+1 , B[idx]) + abs(B[idx] - pre_val);
        down = calc(idx+1 , 1) + abs(1 - pre_val);
    }
    return DP[idx][pre_val] = max(top,down);
}

int main(){
    fastIO;
    cin>>t;
    while(t--){
        cin>>n;
        memset(DP,-1,sizeof DP);
        for(int i = 1 ; i<=n ; i++){
            cin>>B[i];
        }
        cout<<calc(1,1)<<"\n";
    }
}
