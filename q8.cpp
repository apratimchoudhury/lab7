#include<iostream>                              //include library
using namespace std;

int sumDigit(int n,int sum)                     //function for calculating the sum of digits of a number
{
    if (n!=0)                                   //stopping condition
    {
        return sum=n%10+sumDigit(n/10,sum);     //returning sum of digits through recursion
    }
}





int main()                                      //driver funtion
{
    int n;
    cout<<"Enter a number: ";                   //take input
    cin>>n;
    cout<<"The sum of digits of "<<n<<" is "<<sumDigit(n,0)<<endl;  //display output
    return 0;
}

