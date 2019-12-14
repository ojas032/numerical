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
		y[i%2].clear();
		for(int j=0;j<y[(i-1)%2].size()-1;j++){
			a=x[0][j+i]-x[0][j];
			b=y[(i-1)%2][j+1]-y[(i-1)%2][j];
			c=float(b)/a;
			y[i%2].push_back(c);
		}
		for(int j=0;j<y[i%2].size();j++){
			cout<<y[i%2][j]<<" ";
		}
		cout<<"\n";
		}




}
