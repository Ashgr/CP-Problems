#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
ll n , s, A[100005],l , r , mid , ans , sm,temp[100005];
 
ll check_K(ll k){
    //cout<<k<<" ";
    for(ll i = 1 ; i<=n ; i++){
        temp[i] = A[i] + i*k;
        //cout<<temp[i]<<" ";
    }
    sort(temp,temp+n+1);
    //cout<<endl;
    for(ll i = 1 ; i<n ; i++){
        temp[i+1] += temp[i];
    }
    return temp[k];
}
 
int main(){
    fastIO;
    cin>>n>>s;
    for(ll i = 1 ; i<=n ; i++){
        cin>>A[i];
    }
    l = 1 , r = n ,sm = 1e9;
    while(l<=r){
        mid = (l+r)/2;
        if(check_K(mid)<= s){
            sm = check_K(mid);
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid - 1;
        }
    }
    if(ans == 0)sm=0;
    cout<<ans<<" "<<sm;
}