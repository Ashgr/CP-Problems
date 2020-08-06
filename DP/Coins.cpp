#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;

int const N = 3005;
int n ;
double P[N] , DP[N][N];

double calc(int idx , int heads){
    if(heads == (n+1)/2)return 1;
    if(idx > n)return 0;
    if(DP[idx][heads] > -0.9)return DP[idx][heads];
    double hPath = P[idx] * calc(idx+1,heads+1);
    double tPath = (1-P[idx]) * calc(idx+1,heads);
    return DP[idx][heads] = hPath + tPath;

}

int main(){
    fastIO;
    cin>>n;
    memset(DP,-1,sizeof DP);
    for(int i = 1 ; i<=n ; i++){
        cin>>P[i];
    }
    cout<<fixed<<setprecision(10)<<calc(1,0);
}
