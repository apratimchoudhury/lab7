#include<iostream>  //include library
using namespace std;

int printOdd(int num1,int num2) //function to print all odd numbers between two given numbers
{
    if (num1%2!=0)  //if first number is odd
    {
        if(num1<=num2)  //stopping condition
        {
            cout<<num1<<endl;
            num1=num1+2;
            printOdd(num1,num2);
        }
        else
            return 0;
    }
    else            //if first number is even
    {
        if(num1<=num2)  //stopping condition
        {
            num1=num1+1;
            cout<<num1<<endl;
            num1=num1+2;
            printOdd(num1,num2);
        }
        else
            return 0;
    }
}    

int printEven(int num1,int num2)    //function to print all even numbers between two given numbers
{
    if (num1%2==0)  //if first number is even
    {
        if(num1<=num2)  //stopping condition
        {
            cout<<num1<<endl;
            num1=num1+2;
            printEven(num1,num2);
        }
        else
            return 0;
    }
    else        //if first number is odd
    {
        if(num1<=num2)  //stopping condition
        {
            num1=num1+1;
            cout<<num1<<endl;
            num1=num1+2;
            printEven(num1,num2);
        }
        else
            return 0;
    }
}    
    
    

int main()  //driver function
{
    int num1,num2;
    cout<<"Enter first number: ";       //take input
    cin>>num1;
    cout<<"Enter second number: ";      //take input
    cin>>num2;
    cout<<"The odd numbers are: "<<endl;    //display output
    printOdd(num1,num2);
    cout<<"The even numbers are: "<<endl;   //display output
    printEven(num1,num2);
    return 0;
}
