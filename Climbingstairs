#include<iostream>
using namespace std;
int climb(int n);

int main()
{
    int n;
    cout<<"Enter the number of stairs(1 - 40): ";
    cin>>n; 
    while(!(n>=1 && n<=40))
    {
        cout<<"Enter Valid Number of stairs(1 - 40): ";
        cin>>n;
    }

    cout<<"Number of ways: "<<climb(n)<<endl;   
    

    return 0;
}

int climb(int n)
{
    if(n == 2) return 2;
    if(n == 1) return 1;

    int current = 0, prev1 = 1,prev2 = 2;

    for(int i = 3; i <= n; i++)
    {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }

    return current;

}
