#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
int n ,A[100005] , q , m , l ,r , mid ,ans;
 
int main(){
    fastIO;
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        cin>>A[i];
    }
    sort(A,A+n+1);
    cin>>q;
    while(q--){
        cin>>m;
        l = 1 , r = n , ans = 0;;
        while(l<=r){
            mid = (r+l)/2;
            if(m>=A[mid]){
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid - 1;
            }
        }
        cout<<ans<<"\n";
    }
 
}
 