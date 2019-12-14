#include<iostream>
#include<algorithm>

using namespace std;

int main(){
int n;
cin>>n;
int  x[n+1],y[n+1];
cout<<"Enter the values for x\n";
for(int i=0;i<n;i++)
cin>>x[i];
cout<<"Enter the values for y\n";
for(int i=0;i<n;i++)
cin>>y[i];
float xn;
cout<<"Enter the value of x\n";
cin>>xn;
float coff=0,deno=0,sum=1,sum2=1;;


for(int i=0;i<n;i++){
sum=1,sum2=1;
for(int j=0;j<n;j++){
if(i!=j){
sum*=float(xn-x[j]);
sum2*=float(x[i]-x[j]);
}
}

coff+=((float(sum)/sum2)*y[i]);
}

cout<<coff<<'\n';
}



