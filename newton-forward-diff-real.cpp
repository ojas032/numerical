#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<float> x[2],y[n+1];
	cout<<"Enter the value of x\n";
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		x[0].push_back(a);
	}
	cout<<"Enter the value of y\n";
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		y[0].push_back(a);
	}
	float a,b,c;
	for(int i=1;i<n;i++){
		y[i].clear();
		for(int j=0;j<y[i-1].size()-1;j++){
			a=x[0][j+i]-x[0][j];
			b=y[i-1][j+1]-y[i-1][j];
			c=float(b)/a;
			y[i].push_back(c);
		}
	/*	for(int j=0;j<y[i].size();j++){
			cout<<y[i][j]<<" ";
		}
		cout<<"\n";*/
		}
		
		
/////////formula////////////////

float ans=0;
float x1;
cin>>x1;
for(int i=0;i<n;i++){
    float f=1;
    for(int j=0;j<i;j++){
        f*=(x1-x[0][j]);
    }
    ans+=(f*y[i][0]);
}


cout<<ans<<'\n';


}

