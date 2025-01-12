#include<iostream>
using namespace std;
int main()
{
    int n;  // variable to store user input
    cout<<"Enter a number to find its factorial: ";
    cin>>n;

    int Factorial = 1;
    cout<<"Factorial of "<<n<<" is: ";
    while(n>0)
    {                       //formula to find factorial: factorial = n*(n-1)*(n-2)*(n-3)....
        Factorial *= n;
        --n;
    }
    cout<<Factorial<<endl;

    return 0;
}