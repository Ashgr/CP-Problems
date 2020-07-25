#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
using namespace std;
 
ll A[200005],B[200005];
int n,m;
vector<ll>V;
int main(){
	fastIO;
    cin>>n>>m;
    for(int i = 0 ; i<n ; i++){
        cin>>A[i];
    }
    for(int i = 0 ; i<m ; i++){
        cin>>B[i];
    }
    sort(A,A+n);
    for(int i = 0 ; i<m ;i++){
        ll l = 0 , r = n-1 ,ans =0;
        while(l<=r){
            ll mid = (r+l)/2;
            if(B[i]>=A[mid]){
                l = mid+1;
                ans = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        cout<<ans<<" ";
    }
}