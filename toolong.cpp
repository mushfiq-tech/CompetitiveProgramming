#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>> n;
        for (int i = 0; i < n; i++)
        {
            string word;
            cin>> word;
            int lenWord = word.length() ;
            if (lenWord<=10)
            {
                cout<<word<<endl;
            }
        
            else if ( lenWord > 10)
            {
                cout<<word[0]<<lenWord-2<<word[lenWord-1]<<endl;
            }

        }
        

      
    return 0;
}