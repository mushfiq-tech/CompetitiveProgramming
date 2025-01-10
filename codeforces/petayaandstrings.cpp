// #include <bits/stdc++.h> 
// #include <algorithm>
// using namespace std;


// int main()
// {
    
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     string s1,s2;

//     cin>>s1;
//     cin>>s2;

//     transform (s1.begin(),s1.end(),s1.begin(),::tolower);
//     transform (s2.begin(),s2.end(),s2.begin(),::tolower);

//     if (s1>s2)
//     {
//         cout<<"1"<<endl;
//     }
//     else if (s1<s2)
//     {
//         cout<<"-1"<<endl;
//     }
//     else
//     {
//         cout<<"0"<<endl;
//     }
    

//     return 0;
// }
#include <bits/stdc++.h>
#include <iostream>
#include <cctype>  // for tolower
using namespace std;

int main() {
    string s1, s2;
    
    // Input two strings
    cin >> s1 ;
    cin >> s2;

    // Compare character by character in a case-insensitive way
    for (size_t i = 0; i < s1.length(); i++) {
        // Convert each character to lowercase during comparison
        if (tolower(s1[i]) < tolower(s2[i])) {
            cout << "-1" << endl;
            return 0;
        } else if (tolower(s1[i]) > tolower(s2[i])) {
            cout << "1" << endl;
            return 0;
        }
    }
    
    // If all characters are equal, the strings are equal
    cout << "0" << endl;
    return 0;
}
