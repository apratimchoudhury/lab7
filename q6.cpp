#include<iostream>      //include library
using namespace std;
int reverse(long n)     //function for printing the reverse of a number 
{
    if(n!=0)            //stopping condition
    {
        cout<<n%10;
        reverse(n/10);
    }
    else
    return 0;
}

int main()              //driver function
{
    long n;
    cout<<"Enter a number: ";   //take input
    cin>>n;
    cout<<"The revese of the given number is: ";    //display output
    reverse(n);
    return 0;
}

