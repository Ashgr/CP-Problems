#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
ll n , q , x , def[200005] , dp[200005],l , r,mid,warior,sm;
 
int main(){
    fastIO;
    cin>>n>>q;
    for(int i = 0 ; i<n ; i++){
        cin>>x;
        dp[i+1] = dp[i] + x;
    }
    for(int i = 0 ; i<q ; i++){
        l = 0 , r = n ;
        cin>>def[i];
        sm+=def[i];
        while(l<=r){
            mid = (l+r)/2;
            if(dp[mid]<=sm){
                warior = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        if(sm>=dp[n]){;
            cout<<n<<"\n";
            sm = 0;
        }
        else{
            cout<<n-warior<<"\n";
        }
    }
}