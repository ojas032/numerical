#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int fact(int n){
int f=1;
for(int i=1;i<=n;i++)
f=f*i;
return f;
}



int main(){
int n;
cin>>n;
vector<int> v[n+1];
int x[n+1],y;
for(int i=0;i<n;i++)
cin>>x[i];
for(int i=0;i<n;i++){
cin>>y;v[0].push_back(y);}
for(int i=1;i<n;i++){
for(int j=1;j<v[i-1].size();j++){
v[i].push_back(v[i-1][j]-v[i-1][j-1]);
}
}


/*
for(int i=0;i<n;i++){
for(int j=0;j<v[i].size();j++){
cout<<v[i][j]<<" ";
cout<<"\n";
}

}*/


int h=x[1]-x[0];
cout<<h<<'\n';
int num;
cin>>num;
cout<<x[n-1]<<"\n";
float u=(num-x[n]);
u=u/h;
//cout<<u<<"\n";


float sum=0;
for(int i=0;i<n;i++){
float ans=1;
float u1=u;;
for(int j=1;j<=i;j++){
ans*=u1;
//cout<<u1<<" ";
u1=u1+j;
}
cout<<"\n";
ans=ans/fact(i);
ans*=v[i][v[i].size()-1];
sum+=ans;
}
cout<<sum<<"\n";

}

