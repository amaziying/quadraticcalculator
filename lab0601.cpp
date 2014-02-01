//  Lab Assignment 6 Task 1
//  <lab0601.cpp>
// This program computes the roots of a quadratic equation
//  Created by Ziying Zhang

#include <iostream>
#include <cmath>
using namespace std;
// function declarations
double realroot1(double a, double b, double determinant);
double realpart(double a, double b);
double imaginarypart(double a, double determinant);
double realroot2(double a, double b, double determinant);


int main()
{
    double a, b, c; //variable declarations
    double determinant;
    double real1;
    double real2;
    double imaginary;
    double realpt;
    
    cout << "Given the equation ax^2+bx+c=0 , please enter the coefficients: \n" //user input
         << "a: ";
    cin >> a;
    cout << endl<< "b: ";
    cin >> b;
    cout << endl<< "c: ";
    cin >> c;
    
    determinant = b*b - 4*a*c; //determinant 
    //function calling
    real1 = realroot1(a, b, determinant);
    real2 = realroot2(a, b, determinant);
    imaginary = imaginarypart(a, determinant);
    realpt= realpart (a, b);
    //determining if real or complex root
    if (determinant < 0)
    {
        cout << "The roots are: " << realpt << " + " << imaginary << "j and " << realpt << " - " << imaginary << "j";
    }
    else
    {

        cout << "The roots are: " << real1 << " and " << real2;
    }
    
    system ("pause");
    return 0;
}
//function definintions below
double realroot1(double a, double b, double determinant)
{
    return ((-b + sqrt(determinant))/(2*a));
}

double realroot2(double a, double b, double determinant)
{
    return ((-b - sqrt(determinant))/(2*a));
}

double imaginarypart(double a, double determinant)
{
    return (sqrt(abs(determinant))/(2*a));
}


double realpart(double a, double b)
{
    return (-b/(2*a));
}
                
