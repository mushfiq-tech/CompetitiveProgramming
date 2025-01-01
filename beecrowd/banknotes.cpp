#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    cout<<n<<endl;
    int notes[] = {100,50,20,10,5,2,1};
    for (int i = 0; i < 7; i++)
    {
        int count = n/notes[i];
        cout<<count<<" nota(s) de R$ "<<notes[i]<<",00"<<endl;
        n = n%notes[i];
    }
    

    return 0;
}

// -------------------------------its need modification here---------------------------------
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int money;
//     int n100,n50,n20,n10,n5,n2,n1;
//     cin>>money;
//     cout<<money;
//     if (money>100)
//     {
//         n100 = money / 100;
//         money = money %100;
//     }

//     else if (money>50)
//     {
//         n50 = money / 50;
//         money = money %50;
//     }
    
//     else if (money>20)
//     {
//         n20 = money / 20;
//         money = money %20;
//     }
    
//     else if (money>10)
//     {
//         n10 = money / 10;
//         money = money %10;
//     }

//     else if (money>5)
//     {
//         n5 = money / 5;
//         money = money %5;
//     }
    
//     else if (money>2)
//     {
//         n2 = money / 2;
//         money = money %2;
//     }
//     else if (money>1)
//     {
//         n1 = money / 1;
//         money = money %1;
//     }

//     else if (money<=0)
//     {
//         return 1;
//     }

//     cout<<n100<<" nota(s) de R$ 100,00"<<endl;
//     cout<<n50<<" nota(s) de R$ 50,00"<<endl;
//     cout<<n20<<" nota(s) de R$ 20,00"<<endl;
//     cout<<n10<<" nota(s) de R$ 10,00"<<endl;
//     cout<<n5<<" nota(s) de R$ 5,00"<<endl;
//     cout<<n2<<" nota(s) de R$ 2,00"<<endl;
//     cout<<n1<<" nota(s) de R$ 1,00"<<endl;

//     return 0;
// }
