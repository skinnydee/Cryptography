#include <cmath>
#include <iostream>
#include "totient.cpp"
#include <math.h>

using namespace std;


int main()
{
    int q = 7,p = 3;
    double e = 3, msg;
    double k = 2;
    cout<<"Ente value : "<<endl;
    cin>>msg;
    int n = q*p;
    int phi = (p-1)*(q-1);
    cout<<phi<<endl;
    while(e<phi)
    {
        if (gcd(e, phi) == 1)
        {
            break;
        }
        else
        {
            e++;
        }
    }

    double c = pow(msg,e);
    c = fmod(c,n);
    double d = ((k*phi)+1)/e;
    double decrypt = pow(c,d);
    decrypt = fmod(decrypt,n);
    cout<<"Message sent : "<<msg<<endl;
    cout<<"Encrypted message : "<<c<<endl;;
    cout<<"Decrypted message : "<<decrypt<<endl;

    return 0;
}

    

