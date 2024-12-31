#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
 
   float A,B,C;
   double pi= 3.14159;
   double triangulo,circulo,trapezio,quadrado,retangulo;
   cin>>A>>B>>C;
   
   triangulo = (0.5)*A*C;
   circulo= pi*pow(C,2);
   trapezio= (0.5)*(A+B)*C;
   quadrado= pow(B,2);
   retangulo= A*B;
   
   cout<<fixed<<setprecision(3);
   
   cout<<"TRIANGULO: "<<triangulo<<endl;
   cout<<"CIRCULO: "<<circulo<<endl;
   cout<<"TRAPEZIO: "<<trapezio<<endl;
   cout<<"QUADRADO: "<<quadrado<<endl;
   cout<<"RETANGULO: "<<retangulo<<endl;
 
    return 0;
}