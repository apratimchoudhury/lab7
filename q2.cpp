#include<iostream>      //include library  
using namespace std;

int printNumbers(int i,int n)   //funtion for printing natural numbers   
{
    if(i<=n)
    {
        cout<<i<<endl;
        i++;
        printNumbers(i,n);
    }
    else
        return 1;
}

int main()  //driver function
{
    int n;
    cout<<"Enter the number upto which all natural numbers are to be printed: ";    //take input
    cin>>n;
    printNumbers(1,n);  //use function
    return 0;
}

