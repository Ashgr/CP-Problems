#include<bits/stdc++.h>
 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
using namespace std;
 
ll n,x,y;
 
int main(){
    fastIO;
    cin>>n>>x>>y;
    ll l = 0 , r = 1e18, ans = 1e18;
    while(l<=r){
        ll mid = (l+r)/2;
        ll comp = mid/x + mid/y;
        if (comp>=n){
            ans = min(ans,mid);
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans;
}