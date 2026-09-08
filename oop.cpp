// Basic object-oriented C++ example
#include <iostream>
#include <string>
using namespace std;
// class Rectangle
// {
// private:
//     double lenght;
//     double width;

// public:
//     void Set_L_Rec(double l)
//     {
//         if (l > 0)
//             lenght = l;
//         else
//             cout << "Error\n";
//     }
//     void Set_W_Rec(double w)
//     {
//         if (w > 1)
//             width = w;
//         else
//             cout << "Error\n";
//     }
//     double cal_Area_Rec()
//     {
//         return width * lenght;
//     }
// };
// int main()
// {
//     Rectangle Calc;
//     Calc.Set_L_Rec(90.1);
//     Calc.Set_W_Rec(10.7);
//     cout << "Calculate Area Is : " << Calc.cal_Area_Rec() << "\n";
//     return 0;
// }
// class car
// {
// };
// #include "student.h"
#include "AccountBank.h"
int main()
{
    AccountBank s1;
    AccountBank s2("Mahmoud", "102129830495432", 20.9);
    s2.getinfo();
    return 0;
}