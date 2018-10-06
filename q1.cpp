//include library
#include<iostream>
using namespace std;

//recursive function for calculatin power of a number
int exponent(int base,int power)
{
    
    if(power!=0)//exit condition
    {
        base=base*exponent(base,power-1);
        return base;
    }
    else
        return 1;
}   

//driver function
int main()
{
    int base,power;
    cout<<"Enter a number: ";//take input
    cin>>base;
    cout<<"Enter the power to be calculated: ";//take input
    cin>>power;
    int p=exponent(base,power);
    cout<<base<<" raised to the power "<<power<<" is "<<p;//display output
    return 0;
}


    
