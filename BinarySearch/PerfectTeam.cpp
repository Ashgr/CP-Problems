#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
int q ,c,m,x,l,r,mid,ans;
 
int main(){
    fastIO;
    cin>>q;
    while(q--){
        cin>>c>>m>>x;
        l = 0 , r = min(c,m),ans=0;
        while(l<=r){
            mid = (r+l)/2;
            if((c+m+x)-2*mid >=mid){
                l = mid+1;
                ans = mid;
            }
            else{
                r = mid - 1;
            }
        }
        cout<<ans<<"\n";
    }
}