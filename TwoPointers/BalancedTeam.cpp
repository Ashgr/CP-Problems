#include<bits/stdc++.h>
using namespace std;
 
int n , arr[200005] , l ,r ,ans;
int main(){
    cin>>n;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    l = 0 , r= 0, ans = 0 ;
    while(r!=n){
        if(abs(arr[r]-arr[l])<=5){
            ans = max(ans,r-l+1);
        }
        while(abs(arr[r]-arr[l])>5){
            l++;
        }
        r++;
    }
    cout<<ans;
}