#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int A,B,C;
    
    cin>>A>>B>>C;
    
    int grtab = ((A+B)+abs(A-B))/2;
    int grtabc = ((grtab+C)+abs(grtab-C))/2;
    
    cout<<grtabc<<" eh o maior"<<endl;
 
    return 0;
}

// #include <stdio.h>
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    
//     int A,B,C;
    
//     cin>>A>>B>>C;
    
//     int greatest = A;

//     if (B>greatest)
//     {
//         greatest = B;
//     }
//     else if (C> greatest)
//     {
//         greatest = C;
//     }
    
//     cout<<greatest<<" eh o maior"<<endl;
 
//     return 0;
// }