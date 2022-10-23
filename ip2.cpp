#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int convert(ll n)
{
    int dec = 0, i = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
int main()
{
    ll a, b, c, d;
    cout << "Enter the four address in binary: " << endl;
    cin >> a >> b >> c >> d;
    cout << "Input IP Address : ";
    cout << a << "." << b << "." << c << "." << d << endl;

    if (convert(a) >= 0 && convert(a) <= 255 && convert(b) >= 0 && convert(b) <= 255 && convert(c) >= 0 && convert(c) <= 255 &&
        convert(d) >= 0 && convert(d) <= 255)
    {
        cout << "Convert the IP in binary to decimal : ";
        cout << convert(a) << "." << convert(b) << "." << convert(c) << "." << convert(d) << endl;
    }
    else
    {
        cout << "Invalid IP Address" << endl;
    }
}