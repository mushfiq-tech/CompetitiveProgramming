// ---------------------------IN THE NAME OF ALLAH-----------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    vector<int>numbers;

    for (size_t i = 0; i < s.length(); i+=2)
    {
        numbers.push_back(s[i]-'0');
    }

    sort(numbers.begin(),numbers.end());
    
    for (size_t i = 0; i < numbers.size(); i++)
    {
        if (i>0)
        {
            cout<<'+';
        }
        cout<<numbers[i];
    }
    cout<<endl;
    return 0;
}
