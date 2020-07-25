#include<bits/stdc++.h>
using namespace std;
 
int n , d , l , r ;
long long cs[100001];
long long ans,sum;
 
pair<int,int>frnds[100002];
int main(){
    cin>>n>>d;
    int m,s;
    for(int i = 0 ; i<n ; i++){
        cin>>m>>s;
        pair<int,int>P;
        P.first = m;
        P.second = s;
        frnds[i] = P;
    }
    sort(frnds,frnds+n);
    l =0 , r=0 ;
    sum =0 , ans = 0;
    while(r!=n){
        sum+=frnds[r].second;
        if(frnds[r].first-frnds[l].first<d){
            ans = max(ans,sum);
        }
        while(frnds[r].first - frnds[l].first>=d){
            sum-=frnds[l].second;
            l++;
        }
    ans = max(ans,sum);
    r++;
    }
    cout<<ans;
}