#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
int A[11], n , k,cs[11];
 
int main(){
    fastIO;
    cin>>n>>k;
    for(int i = 1 ; i<=n ; i++){
        A[i] = 5*i;
    }
    for(int i = 1 ; i<=n ; i++){
        cs[i] = cs[i-1] + A[i];
    }
    int  l = 1 , r = n , ans = 0,mid;
    while(l<=r){
        mid = (r+l)/2;
        if(cs[mid]+k <= 240){
            l = mid + 1;
            ans = mid;
        }
        else{
            r = mid - 1;
        }
    }
    cout<<ans;
}