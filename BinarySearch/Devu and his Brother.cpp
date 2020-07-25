#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
ll n , m , l , r , mid1 , mid2 , ans , A[100001] , B[100001];
ll check(ll a){
    ll ch = 0;
    for(int i = 0 ; i<n ; i++){
        if(A[i]<a)ch+=a-A[i];
    }
    for(int i = 0 ; i<m ; i++){
        if(B[i]>a)ch+=B[i]-a;
    }
    return ch;
}
 
int main(){
    fastIO;
    cin>>n>>m;
    for(int i = 0 ; i<n ; i++)cin>>A[i];
    for(int i = 0 ; i<m ; i++)cin>>B[i];
 
    l = 0 , r = 1e9+1 , ans = 1e18;
    while(l<=r){
        mid1 = l+(r-l)/3;
        mid2 = r-(r-l)/3;
        ll ans1 = check(mid1);
        ll ans2 = check(mid2);
        ans = min(ans,min(ans1,ans2));
        if(ans1>ans2){
            l = mid1 + 1;
        }
        else{
            r = mid2 - 1;
        }
    }
    cout<<ans;
}