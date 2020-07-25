#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
ll n , k, l , r , mid , ans;
 
int main(){
    fastIO;
    cin>>n>>k;
    l = 0 , r = n;
    while(l<=r){
        mid = (r+l)/2;
        ll seq = (mid*(mid+1)/2);
        if(seq - (n-mid)==k){
            cout<<n-mid;
            return 0;
        }
        if(seq - (n-mid)>k){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
}