#include<bits/stdc++.h>
 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
using namespace std;
 
string p , t ;
int A[200005],n,m;
bool take[200005];
 
bool check(int x){
    for(int b = 0 ; b<n ; b++)take[b] = false;
    int i  = 0 , j = 0;
    for (int k = 0 ; k<=x ; k++){
        take[A[k]] = true;
    }
    while(i<n){
        if (take[i]){
            i++;
            continue;
        }
        if (p[i]==t[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
        if (j==m){
            return true;
        }
    }
    return false;
}
 
int main(){
    fastIO;
    cin>>p>>t;
    n = p.length();
    m = t.length();
    for(int i = 0 ; i<n ; i++){
        cin>>A[i];
        A[i]--;
    }
    ll l = 0 , r = n-1, ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(check(mid)){
            l = mid + 1;
            ans = mid;
        }
        else{
            r = mid - 1;
        }
    }
    cout<<ans+1;
}