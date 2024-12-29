#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main() {
 
   float A,B;
   float wa=3.5;
   float wb=7.5;
   float media;
   cin>>A;
   cin>>B;
   
   media = (A*wa+B*wb)/(wa+wb);
   cout<<fixed<<setprecision(5);
   cout<<"MEDIA = "<<media<<endl;
    return 0;
}