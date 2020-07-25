#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
ll n , A[200005] , B[200005] , dif[200005],ans;
 
int main(){
    fastIO;
    cin>>n;
    for(int i = 0 ; i<n ; i++){
        cin>>A[i];
    }
    for(int i = 0 ; i<n ; i++){
        cin>>B[i];
    }
    for(int i = 0 ; i<n ; i++){
        dif[i] = A[i] - B[i];
    }
    sort(dif,dif+n);
 
    int l = 0 , r = n-1 ;
    while(l<=r){
        if(dif[r]+dif[l]>0){
            ans+=r-l;
            r--;
        }
        else{
            l++;
        }
    }
    cout<<ans;
}