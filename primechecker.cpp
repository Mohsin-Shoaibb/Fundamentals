//any number that is only divisible by 1 and itself is called prime. inshort, a prime is only divisible by 2 numbers
//prime numbers are only positive and only even prime number is 2

#include<iostream>
using namespace std;
int main()
{
    //n is a variable to hold user input number
    int n;
    cout<<"Enter a number to check if it is prime: ";
    cin>>n;
    
    int CountDivisors = 0;      // this variable counts how many numers divide the user input
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
           CountDivisors++;
        }
    }

    if(CountDivisors == 2) 
    {
        cout<<n<<" is a prime number.\n";
    }
    else
    {
        cout<<n<<" is not a prime number.\n";
    }

    return 0;
}