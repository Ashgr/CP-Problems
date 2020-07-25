#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
int n,a,b,c,DP[4005];
int const inf = - 1e6;
 
int calc(int n){
    if (n<0)return inf;
    if (n==0)return 0;
    if (DP[n] != -1)return DP[n];
    int ansA = 1 + calc(n-a);
    int ansB = 1 + calc(n-b);
    int ansC = 1 + calc(n-c);
    return DP[n] = max(ansA,max(ansB,ansC));
}
 
int main(){
    fastIO;
    cin>>n>>a>>b>>c;
    memset(DP,-1,sizeof DP);
    cout<<calc(n);
}