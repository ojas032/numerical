#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
int n;
cin>>n;
vector<int> v[n];
int x[n+1],y;
for(int i=0;i<n;i++)cin>>x[i];
for(int i=0;i<n;i++){cin>>y;v[0].push_back(y);}

for(int i=1;i<n;i++)
for(int j=1;j<v[i-1].size();j++)
v[i].push_back(v[i-1][j]-v[i-1][j-1]);

for(int i=0;i<n;i++){
for(int j=0;j<v[i].size();j++){
cout<<v[i][j]<<" ";
}
cout<<"\n";
}



}




