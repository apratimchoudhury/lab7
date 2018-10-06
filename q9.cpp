#include<iostream>                  //include library
using namespace std;
int fact(int n)                     //function for calculting factorial of a given number
{
    if(n!=0)                        //stopping condition
    {
        return n*fact(n-1);         //return factorial value through recursion
    }
    else
        return 1;
}

int main()                          //driver function
{
    int n;
    cout<<"Enter a number: ";       //take input
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<fact(n)<<endl;    //display output
    return 0;
}

