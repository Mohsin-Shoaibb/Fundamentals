//This code prints fibonacci sequence 

#include<iostream>
using namespace std;
int main()
{
    int n;      // asking user upto which digit the sequence should be printed
    cout<<"Enter the number of digits in fibonacci you want to display: ";
    cin>>n;

    // a is first, b is second, c is the next digit which will be sum of a and b
    int a = 0, b = 1, c;

    //printing first two digits first
    if(n>=1)
    {
        cout<<a<<" ";
    } 
    if(n>=2)
    {
        cout<<b<<" ";
    }

    //printing rest of sequence using while loop.
    int i = 3;
    while(i <= n)
    {
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
        i++;
    }


    return 0;
}