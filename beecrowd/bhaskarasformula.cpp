#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a,b,c;
    cin>>a>>b>>c;
    double r1,r2,d;

    d= b*b-4*a*c;

    r1 = ((-b)+ sqrt(d))/(2*a);
    r2 = ((-b)- sqrt(d))/(2*a);

    if (a==0 || d<0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<r1<<endl;
        cout<<"R2 = "<<r2<<endl;
    }
    

    return 0;
}

// #include <iostream>
// #include <iomanip>
// #include <cmath>  // For sqrt

// // Function to calculate the discriminant
// double calculate_discriminant(double A, double B, double C) {
//     return (B * B) - (4 * A * C);
// }

// // Function to check if the roots are possible and calculate them
// bool calculate_roots(double A, double B, double C, double& R1, double& R2) {
//     double discriminant = calculate_discriminant(A, B, C);
    
//     if (A == 0 || discriminant < 0) {
//         return false;  // Return false if the calculation is impossible
//     }

//     R1 = (-B + sqrt(discriminant)) / (2 * A);
//     R2 = (-B - sqrt(discriminant)) / (2 * A);
    
//     return true;  // Return true if calculation was successful
// }

// int main() {
//     double A, B, C;
//     double R1, R2;  // Variables to hold the roots

//     // Reading input
//     std::cin >> A >> B >> C;

//     // Check if we can calculate the roots
//     if (calculate_roots(A, B, C, R1, R2)) {
//         // Print roots with 5 digits after the decimal point
//         std::cout << std::fixed << std::setprecision(5);
//         std::cout << "R1 = " << R1 << std::endl;
//         std::cout << "R2 = " << R2 << std::endl;
//     } else {
//         std::cout << "Impossivel calcular" << std::endl;
//     }

//     return 0;
// }
