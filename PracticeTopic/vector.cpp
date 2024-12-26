#include<bits/stdc++.h>
using namespace std;
int main (){

    vector<char> kode = {'a','b','c','d'};

    kode.push_back('e');

    cout<<kode[4]<<"\n";
    kode.pop_back();
    cout<<kode.back();



    return 0;
}