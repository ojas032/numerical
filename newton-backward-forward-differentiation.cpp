#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main(){
int n;
cin>>n;
vector<float> v[n+1];
float x[n+1],y;
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
//////newton -differentiation-----///
cout<<"First derivative:\n";
float h=x[1]-x[0];
float t;cin>>t;
int ml,p;
if(t==x[0]){
    ml=-1;
    p=0;
}
else if(t==x[n-1]){ml=1};
cout<<ml<<'\n';
float fst=0;
for(int i=1;i<n;i++){
    if(ml==1){
        p=v[i].size()-1;
    }
    fst+=(pow(ml,i-1)*(float(v[i][p]/i));
}
cout<<"first diff\n";
cout<<float(fst)/h<<'\n';

}




