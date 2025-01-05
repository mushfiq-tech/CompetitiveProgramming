// // #include <stdio.h>
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
 
// //    ios::sync_with_stdio(false);
// //    cin.tie(nullptr);

// //    int A,B,C,D = 0;
// //    cin>>A>>B>>C>>D;

// //    if (B>C && D>A)
// //    {
// //         if ((C+D) > (A+B))
// //         {
// //             if (C>0 && D>0)
// //             {
// //                 if (A%2==0)
// //                 {
// //                     cout<<"Valores aceitos"<<endl;
// //                 }
// //                 else
// //                     {
// //                         cout<<"Valores nao aceitos"<<endl;
// //                     }
// //             }
// //             else
// //             {
// //                 cout<<"Valores nao aceitos"<<endl;
// //             }
// //         }
// //         else
// //             {
// //                 cout<<"Valores nao aceitos"<<endl;
// //             }
// //    }
   

// //    else
// //    {
// //     cout<<"Valores nao aceitos"<<endl;
// //    }
   
 
// //     return 0;
// // }

// #include <stdio.h>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int A,B,C,D;
//     cin>>A>>B>>C>>D;

//     if (B>C && D>A && (C+D) > (A+B) && C>0 && D>0 && A%2==0)
//     {
//         cout<<"Valores aceitos"<<endl;
//     }

//     else
//     {
//         cout<<"Valores nao aceitos"<<endl;
//     }
    
        
//     return 0;
// }

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
 bool valueaccept(int A ,int B ,int C,int D){
        return (B>C) && (D>A) && ((C+D) > (A+B)) && (C>0) && (D>0) && (A%2==0);
    }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B,C,D;

    cin>>A>>B>>C>>D;

    if ( valueaccept(A,B,C,D))
    {
        cout<<"Valores aceitos"<<endl;
    }
    else
     {
         cout<<"Valores nao aceitos"<<endl;
     }


    return 0;


}
