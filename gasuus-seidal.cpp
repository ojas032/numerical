#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    float fc[3][4],sc[4],tc[4],x,y,z,x1=0,y1=0,z1=0;
    for(int j=0;j<3;j++){
      //  cout<<j+1<<" th equation\n";
        for(int i=0;i<3;i++){
        //    cout<<i+1<<" th coff\n";
            cin>>fc[j][i];
        }
        //cout<<"Enter the rhs\n";
        cin>>fc[j][3];
    }
    for(int i=0;i<10;i++){
    x1=float(fc[0][3]-(fc[0][1]*y1)-(fc[0][2]*z1))/fc[0][0];
    y1=float(fc[1][3]-(fc[1][0]*x1)-(fc[1][2]*z1))/fc[1][1];
    z1=float(fc[2][3]-fc[2][0]*x1-fc[2][1]*y1)/fc[2][2];
    }
    cout<<x1<<" "<<y1<<" "<<z1<<'\n';
}