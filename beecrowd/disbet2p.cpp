#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
 
    float x1,x2,y1,y2;
    double dis;
    
    cin>>x1>>y1;
    cin>>x2>>y2;
    float xf=x2-x1;
    float yf=y2-y1;
    double xyf=pow(xf,2)+pow(yf,2);
    dis = pow(xyf,0.5);
    
    cout<<fixed<<setprecision(3);
    cout<<dis<<endl;
    return 0;
}