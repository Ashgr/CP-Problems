#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
ll n , m , A[200005],cs[200005],ltr,l,r,mid,ans;
 
int main(){
    fastIO;
    cin>>n>>m;
    for(int i = 0 ; i<n ; i++){
        cin>>A[i];
    }
    for(int i = 1 ; i<=n ; i++){
        cs[i] = cs[i-1] + A[i-1];
    }
    while(m--){
        cin>>ltr;
        l = 1 , r = n , ans= 0;
        ll dorm,room;
        while(l<=r){
            mid = (r+l)/2;
            if(ltr<=cs[mid]){
                dorm = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        //cout<<ltr<<" belong to "<<dorm<<endl;
        room = ltr - cs[dorm-1];
        cout<<dorm<<" "<<room<<"\n";
    }
 
}