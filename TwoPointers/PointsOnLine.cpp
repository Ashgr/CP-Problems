#include<bits/stdc++.h>
 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
using namespace std;
 
long long int n ,d, arr[1000005] , l ,r ,ans;
int main(){
    fastIO;
    cin>>n>>d;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    l = 0 , r = 0 , ans = 0;
    while(r!=n){
        if(arr[r]-arr[l]<=d){
            ans+=((r-l)*(r-l-1))/2;
            r++;
        }
        else{
            l++;
        }
    }
    cout<<ans;
}