#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
const int N = 1e5 + 5 ;
int n , arr[N],DP[N];
 
int calc(int idx){
    if (idx == n-1)return 0;
    if (idx >= n) return 1e9;
    if (DP[idx] != -1) return DP[idx];
    int one = calc(idx + 1) + abs(arr[idx+1] - arr[idx]);
    int two = calc(idx + 2) + abs(arr[idx+2] - arr[idx]);
    return DP[idx] = min(one,two);
}
 
int main(){
    fastIO;
    cin>>n;
    memset(DP,-1,sizeof DP);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<calc(0);
}