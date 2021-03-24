#include <iostream>

using namespace std;

int gcd(int a, int b);
int totient(unsigned int n);

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"phi("<<n<<") = "<<totient(n)<<endl;
}

int totient(unsigned int n)
{
    int i , result;
    unsigned int count = 0;
    for(i = 1;i < n;i++)
    {
        result = gcd(i, n);
        if ( result == 1)
        {
            count++;
        }
        else 
        {
            continue;
        }
    }
    return count;
}

int gcd(int a, int b)
{
    int q,r;
    while (b > 0 )
    {
        q = a/b;
        r = a - q*b;
        a=b;
        b=r;
    }
    return a;
}
