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
    int coins[]= {100,50,25,10,5,1};
    cout<<"NOTAS:"<<endl;

    for (int i = 0; i < 6; i++)
    {
        // int notas = input / notes[i];
        cout<<input / notes[i]<<" nota(s) de R$ "<<notes[i]/100.0<<".00"<<endl;
        inputcon = inputcon % notes[i];
    }
    cout<<"MEDAS:"<<endl;
    for (int i = 0; i < 6; i++)
    {
        // int medas = inputcon / coins[i];
        cout<<inputcon / coins[i]<<" moeda(s) de R$ "<<coins[i]/100.0<<endl;
        inputcon = inputcon % coins[i];
    }
    

    
    return 0;
}
