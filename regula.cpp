#include<iostream>
#include<algorithm>

#include<cmath>

using namespace std;

main(){
int p[100];
int coff[100];
cout<<"Enter the highest degree of the polynomial\n";
int n;
cin>>n;
for(int i=0;i<n+1;i++){
cout<<"Enter the cofficient of first term\n";
cin>>coff[i];
cout<<"ENTER THE POWER OF THE TERM\n ";
cin>>p[i];
}

long long int neg,pos,ck=0;

for(int i=-100;i<101;i++){
        int ans=0;
        for(int j=0;j<n+1;j++){
        ans+=coff[j]*(pow(i,p[j]));}
//cout<<ans<<" "<<i<<"\n";
        if(ans<0)
        neg=i;
        if(ans>=0){
        pos=i;
        break;
ck=1;
        }
if(ck==1)
break;

}
cout<<neg<<" "<<pos<<"\n";
float fx1=0.00,fx2=0.00,neg1=neg,pos1=pos,x2,ans=0.00;
for(int j=0;j<n+1;j++){
        fx1+=coff[j]*(pow(neg1,p[j]));}
for(int j=0;j<n+1;j++){
        fx2+=coff[j]*(pow(pos1,p[j]));}
x2=neg1-((pos1-neg1)*fx1)/(fx2-fx1);

cout<<fx1<<" "<<fx2<<" "<<x2<<'\n';

int t=14;
float fx3=0.00;
while(t--){
fx3=0;
for(int j=0;j<n+1;j++){
fx3+=coff[j]*(pow(x2,p[j]));}
if(fx3<0){
neg1=x2;
fx1=fx3;
}
else{
pos1=x2;
fx2=fx3;
}
x2=neg1-((pos1-neg1)*fx1)/(fx2-fx1);

cout<<fx1<<" "<<fx2<<" "<<x2<<'\n';
}


}

