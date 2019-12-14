#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    char c[3]={'x','y','z'};
    double a[3][3],d[3],y[3],x[3];
    double l[3][3],u[3][3];
    for(int i=0;i<3;i++){
        cout<<"Enter the coff of"<<c[i]<<'\n';
        for(int j=0;j<3;j++){
            cin>>a[j][i];
        }
    }

cout<<"Enter d1,d2,d3" ;
for(int i=0;i<3;i++){
    cin>>d[i];
}

for(int i=0;i<3;i++){
    l[i][0]=a[i][0];
    u[i][i]=1;
}

l[0][1]=l[0][2]=u[1][0]=u[2][0]=0;
l[1][2]=u[2][1]=0;
u[0][1]=a[0][1]/l[0][0];
u[0][2]=a[0][2]/l[0][0];
l[1][1]=a[1][1]-(l[1][0]*u[0][1]);
u[1][2]=(a[1][2]-(l[1][0]*u[0][2]))/l[1][1];

l[2][1]=a[2][1]-l[2][0]*u[0][1];
l[2][2]=a[2][2]-(l[2][0]*u[0][2]+l[2][1]*u[1][2]);

y[0]=d[0]/l[0][0];
y[1]=(d[1]-(l[1][0]*y[0]))/l[1][1];
y[2]=(d[2]-(l[2][0]*y[0]+l[2][1]*y[1]))/l[2][2];
x[2]=y[2]/u[2][2];
x[1]=(y[1]-u[1][2]*x[2])/u[1][1];
x[0]=(y[0]-(u[0][1]*x[1]*u[0][2]*x[2]))/u[0][0];

for(int i=0;i<3;i++){

    cout<<"value of x"<<i<<" "<<x[i]<<"\n";
}

return 0;
}