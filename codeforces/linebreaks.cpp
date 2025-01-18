// https://codeforces.com/problemset/problem/2050/A


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     int n,m;
//     cin>>n>>m;
//     vector<string> s[n];
//     for (int i = 0; i < t; i++)
//     {
        
        
        
//         for (int i = 0; i < n; i++)
//         {
//             cin>>s[i];
//         }
//         int val = 0;
//         int x = 0;

//         for (int i = 0; i < n; i++)
//         {
//             int wlen = s[i].size();
//             if (val+wlen<=m)
//             {
//                 val = val+wlen;
//                 x++;
//             }
//             else
//             {
//                 break;
//             }
            
//         }
        
//     }
  

    
//     cout<<x<<endl
    
//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, m;
        cin >> n >> m; 
        
        vector<string> words(n); 
        for (int i = 0; i < n; ++i) {
            cin >> words[i];
        }
        
        int current_length = 0;
        int x = 0; 
        
        for (int i = 0; i < n; ++i) {
            int word_length = words[i].size();
            if (current_length + word_length <= m) {
                current_length += word_length; 
                x++; 
            } else {
                break; 
            }
        }
        
        cout << x << endl; 
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;

    while (t--)
    {
        int n,m;
        cin>>n>>m;
        
        vector<string> words;

        for (int i = 0; i < n; i++)
        {
            cin>>words[i];
        }
        

    }
    

    
    return 0;
}


;