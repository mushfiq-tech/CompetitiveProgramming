#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number,wh;
    float sph;
    float salary;
    cin>>number;
    cin>>wh;
    cin>>sph;
    
    salary = wh * sph;
    
    cout<<"NUMBER = "<<number<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"SALARY = U$ "<<salary<<endl;

    return 0;
}
