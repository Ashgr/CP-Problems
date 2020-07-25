#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mp make_pair
#define pb push_back
 
typedef long long ll;
using namespace std;
 
ll n , k , A[100005] , B[100005],l,r,mid,ans;
 
bool can_cook(int x){
    ll temp = k;
    for(int i = 0 ; i<n ; i++){
        ll need = A[i]*x;
        if(need>B[i])temp-=(need-B[i]);
        if(temp<0)return false;
    }
    return true;
}
 
int main(){
    fastIO;
    cin>>n>>k;
    for(int i = 0 ; i<n ; i++)cin>>A[i];
    for(int i = 0 ; i<n ; i++)cin>>B[i];
    l = 0 , r = 2e9 + 5;
    while(l<=r){
        mid = (l+r)/2;
        if(can_cook(mid)){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout<<ans;
}