#include<iostream>  //include library
using namespace std;
int sumNum(int i,int n)     //function for adding all natural numbers upto given number
{
    if(i<=n)    //stopping contition
    {
        i=i+sumNum(i+1,n);  //recursion
        return i;
    }
    else
        return 0;
}

int main()  //driver function
{
    int n;
    cout<<"Enter the number upto which the sum of all natural numbers is to be calculated: ";   //take input
    cin>>n;
    cout<<"The sum of all natural numbers upto "<<n<<" is "<<sumNum(1,n);   //display output
    return 0;
}

