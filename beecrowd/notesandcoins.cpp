#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double input;
    cin>>input;
    int inputcon = round(input*100);

    int notes[] = {10000,5000,2000,1000,500,200};
    int coins[]= {100,50,20,10,5,2,1};
    cout<<"NOTAS:"<<endl;

    for (int i = 0; i < 6; i++)
    {
        int notas = input / notes[i];
        cout<<notas<<" nota(s) de R$ "<<notes[i]/100.0<<endl;
        inputcon = inputcon % notes[i];
    }
    cout<<"MEDAS:"<<endl;
    for (int i = 0; i < 7; i++)
    {
        int medas = inputcon / notes[i];
        cout<<medas<<" moeda(s) de R$ "<<coins[i]/100.0<<endl;
        inputcon = inputcon % coins[i];
    }
    

    
    return 0;
}
