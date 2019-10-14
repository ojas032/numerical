#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

main(){
//int n;
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

int t=14;
float x,neg1,pos1,fx,ans=0.00;
neg1=neg;
pos1=pos;
while(t--){
ans=0.00;
x=(neg1+pos1)/2;
for(int j=0;j<n+1;j++){
 ans+=coff[j]*(pow(x,p[j]));}
if(ans<0)
neg1=x;
if(ans>=0)
pos1=x;
printf("Ans: %.i4f\n",ans);
printf("a= %.4f   b= %.4f\n",neg1,pos1);
printf("x= %.4f\n",x);
}
}
