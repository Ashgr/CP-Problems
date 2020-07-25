#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
ll n , k , A[300005],l,r,ans;
 
int main(){
    fastIO;
    cin>>n>>k;
    for(int i = 0 ; i<n ; i++){
        cin>>A[i];
    }
    if (k==0 && n == 1){
        cout<<A[0]<<"\n"<<A[0];
        return 0 ;
    }
    bool change = false;
    int l_ans = 0,r_ans = 0;
    int zero = 0;
    while(r!=n){
        if (A[r]==0)zero++;
        if (zero<=k){
            ans = max(ans,r-l+1);
            if (ans == r-l+1){
                change = true;
                l_ans = l;
                r_ans = r;
            }
        }
        while(zero>k){
            if(A[l]==0)zero--;
            l++;
        }
        r++;
    }
    if(change){
        for(int i = l_ans ; i<=r_ans; i++){
            A[i] = 1;
        }
    }
    cout<<ans<<"\n";
    for(int i = 0 ; i<n ; i++){
        cout<<A[i]<<" ";
    }
}