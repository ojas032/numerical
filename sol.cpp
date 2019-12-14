#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<cmath>
#include<climits>
#define ll long long int
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    ll n,m;
    cin>>n>>m;
    vector<ll> v[m+1],q;
    ll a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
        v[i%m].push_back(a[i]);
    }
    for(int i=0;i<m;i++){
        sort(v[i].begin(),v[i].end());
    }
    ll mini=INT_MAX;
    vector<ll> mi;
    vector<ll> mx;
    pair<ll,ll> p[n+1];
    for(int i=0;i<m;i++){
        mi.push_back(v[i][0]);
        mx.push_back(v[i][v[i].size()-1]);
        p[i].first=v[i][0];
        p[i].second=v[i][v[i].size()-1];
    }
    for(int i=0;i<mi.size();i++){
        for(int j=0;j<mx.size();j++){
            if(mx[j]!=p[i].second)
            mini=min(mini,abs(mi[i]-mx[j]));
        }
    }
    cout<<mini<<'\n';
}
}