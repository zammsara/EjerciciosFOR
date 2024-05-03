#include <iostream>
using namespace std;

int main ()
{
    int n, s;
    cout<<"Introduce an natural number n: ";
    cin>>n;

    while(n<=0)
    {
        cout<<"Enter a correct number: ";
        cin>>n;
    }

    s=n*(n+1)/2;

    cout<<"The sum of the first "<< n <<" natural numbers is: "<< s <<endl;

    return 0;
}