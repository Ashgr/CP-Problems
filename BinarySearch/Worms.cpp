#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
using namespace std;
 
int n,m,q,arr[100005],cs[100005];
 
int main(){
	fastIO;
	cin>>n;
	for(int i = 0 ; i<n ; i++)cin>>arr[i];
	for(int i = 1 ; i<=n ; i++){
        cs[i] = cs[i-1] + arr[i-1] ;
	}
	cin>>m;
	while(m--){
        cin>>q;
        // cs  =  2 9 12 16 25
        //        1 2  3  4  5
        int l = 1 , r = n,ans;
        while(l<=r){
            int mid =(r+l)/2;
            if(q<=cs[mid]){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        cout<<ans<<"\n";
	}
}