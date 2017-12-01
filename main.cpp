

/**
 *  Micheal Carroll
 *  C00218621
 *  Exercise 9
 *  Sphere calculator
 */


 //Preprocessor directives
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


//Seperate function declaring calculations
 void sphereCalculator (double r, double *V, double *SA)
{
    *SA = 4*M_PI*(r*r);
    *V=(4/3)*M_PI*(r*r*r);
    return;
}


//Main function
int main(void)
{
    double r,V,SA;
    double *ptr_V, *ptr_SA;

    ptr_V = &V;
    ptr_SA = &SA;

    //Project title
    cout << "Sphere Calculations" << endl;

    //Do - While loop.
    do
    {
        //Read in the values
        cout << "\n Please enter a value greater than 0 for the radius (R):";
        cin >> r;
    }
    while (r <= 0);

    sphereCalculator (r, ptr_V, ptr_SA);

    //Final values
    cout << fixed;
    cout.precision(2);
    cout <<"\n\n Volume = " << V << " m^3" <<endl;
    cout <<"\n Surface area = " << SA << " m^2" <<endl;

    return 0;
}
