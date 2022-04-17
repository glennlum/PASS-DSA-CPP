//  recursion_example.cpp

#include <iostream>

using namespace std;

int sum (int n);        //Sum of First n Numbers
int fact (int n);       //Calculate the Factorial of a Number
int pow (int m, int n); //Power (m^n)
int fib_rec (int n);    //Fibonacci Series Recursive
int sumSq (int n);      //Sum of Squares

int main(void)
{


        //write function calls here...


        return 0;
}

//Sum of First n Numbers -> 1+2+3+4+5+...+ n
int sum (int n)
{
        if (n==0) //base case
        {
                return 0; //sum of first 0 numbers = 0
        }
        else
        {
                return sum(n-1)+n; //recursive call
        }
}

//Calculate the factorial of a number -> n! = 1 x 2 x 3 x 4 x 5 ... x n
int fact (int n)
{
        if (n==0) //base case
        {
                return 1; //0!=1
        }

        else
        {
                return fact(n-1)*n; //recursive call
        }
}

//Power (m^n)
int pow (int m, int n)
{
        if (n==0) //base case
        {
                return 1; //m^0 =1
        }
        else
        {
                return pow(m, n-1)*m; //recursive call
        }
}

//Fibonacci Series Recursive -> 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...Fib n
int fib_rec (int n)
{
        if (n<=1) //base case
        {
                return n; //fib series first two numbers is 0, 1
        }
        else
        {
                return fib_rec(n-2)+fib_rec(n-1); //recursive call
        }
}

//Sum of Squares -> 1^2 + 2^2 + 3^2 ... + n^2
int sumSq (int n)
{
        if (n==0) // base case
        {
                return 0; // For n = 0, sum = 0
        }
        else
        {
                return sumSq(n-1)+(n*n); //recursive call
        }
}
