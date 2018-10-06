#include<iostream>                          //include library
using namespace std;
int hcf(int num1,int num2)                  //function for calculating hcf of two given numbers
{
    if (num2 != 0)                          //stopping condition
       return hcf(num2, num1 % num2);       //return hcf through recursion
    else 
       return num1;
}


int main()                                  // driver function
{
    int num1,num2;
    cout<<"Enter a number: ";               //take input
    cin>>num1;
    cout<<"Enter another number: ";         //take input
    cin>>num2;
    cout<<"The HCF of "<<num1<<" and "<<num2<<" is "<<hcf(num1,num2)<<endl; //display output
    return 0;
    
}
