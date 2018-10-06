#include<iostream>  //include library
using namespace std;

int sumOdd(int firstNum,int secondNum)      // function for adding all odd numbers between two given numbers
{
    if (firstNum%2!=0)      //if 1st num is odd 
    {
        if(firstNum<=secondNum)     //stopping condition
        {
            firstNum=firstNum+sumOdd(firstNum+2,secondNum);
            return firstNum;
        }    
        else
            return 0;
    }
    else                            //if first num is even
    {
        if(firstNum<=secondNum)     //stopping condition
        {
            firstNum=firstNum+1;
            firstNum=firstNum+sumOdd(firstNum+2,secondNum);
            return firstNum;
        }
        else 
            return 0;
    }
    
}


int sumEven(int firstNum,int secondNum)     //funtion for adding all even numbers between two given numbers
{
    if (firstNum%2==0)      //if 1st num is even
    {
        if(firstNum<=secondNum)     //stopping condition
        {
            firstNum=firstNum+sumEven(firstNum+2,secondNum);
            return firstNum;
        }    
        else
            return 0;
    }
    else                            //if 1st num is odd
    {
        if(firstNum<=secondNum)     //stopping condition
        {
            firstNum=firstNum+1;
            firstNum=firstNum+sumEven(firstNum+2,secondNum);
            return firstNum;
        }
        else 
            return 0;
    }
}



int main()      //driver function
{
    int firstNum,secondNum;
    cout<<"Enter the first number: ";       //take input
    cin>>firstNum;              
    cout<<"Enter the second number: ";      //take input
    cin>>secondNum;
    cout<<"The sum of all odd numbers between "<<firstNum<<" and "<<secondNum<<" is "<<sumOdd(firstNum,secondNum)<<endl;    //display output
    cout<<"The sum of all even numbers between "<<firstNum<<" and "<<secondNum<<" is "<<sumEven(firstNum,secondNum)<<endl;  //display output
    return 0;
}


