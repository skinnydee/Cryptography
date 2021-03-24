#include <iostream>

using namespace std;

void gcd(int a, int b);

int main()
{
    float a,b;
    cout<<"Enter the numbers :";
    cin>>a>>b;
    gcd(a, b);
}

void gcd(int a, int b)
{
    int q,r;
    while (b > 0 )
    {
        q = a/b;
        r = a - q*b;
        a=b;
        b=r;
        cout<<"A = "<<a<<" B = "<<b<<endl;
    }
    cout<<a;
}
