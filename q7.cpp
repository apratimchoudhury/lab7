#include<iostream>              //include library
using namespace std;
long reverse(long n,long rev)   //function for finding the reverse of a number
{
    if(n!=0)                    //stopping condition
    {
        rev=rev*10+n%10;
        reverse(n/10,rev);
    }
    
    else
        {
            return rev;
        }
   
}

int main()                      //driver function
{
    long n,revs,num;
    cout<<"Enter a number: ";   //take input
    cin>>n;
    num=n;
    revs=reverse(n,0);          //check if reverse = number. Display result accordingly
    if (revs==num)
    {
        cout<<"The number is a palindrome!!!"<<endl;
    }
    else
        cout<<"The number is not a palindrome!"<<endl;
    return 0;
}


