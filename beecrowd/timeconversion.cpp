#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int v = 60;
    int N = 0;
    cin>>N;
    
    int hr,min,sec = 0;
    
    
        hr = N/3600;
        N = N % 3600;
    
   
        min = N/v;
        N = N % v;
 

        sec = N;

    
    
    cout<<hr<<":"<<min<<":"<<sec<<endl;
 
    return 0;
}