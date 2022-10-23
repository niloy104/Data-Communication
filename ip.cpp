#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int convert(long long n)
{
    int dec = 0, i = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
}
int main()
{
    int input1, input2, input3, input4, m, c, k;

    cout << "Enter the four address in octal: " << endl;
    cin >> input1 >> input2 >> input3 >> input4;

    if (input1 >= 0 && input1 <= 255 && input2 >= 0 && input2 <= 255 && input3 >= 0 && input3 <= 255 &&
        input4 >= 0 && input4 <= 255)
    {
        cout << "Input IP Address : " << endl;
        cout << input1 << "." << input2 << "." << input3 << "." << input4 << endl;

        cout << " Convert the IP in binary: " << endl;
        for (c = 7; c >= 0; c--)
        {
            k = input1 >> c;
            if (k & 1)
                cout << "1";
            else
                cout << "0";
        }
        cout << ".";
        for (c = 7; c >= 0; c--)
        {
            k = input2 >> c;
            if (k & 1)
                cout << "1";
            else
                cout << "0";
        }

        cout << ".";
        for (c = 7; c >= 0; c--)
        {
            k = input3 >> c;
            if (k & 1)
                cout << "1";
            else
                cout << "0";
        }
        cout << ".";
        for (c = 7; c >= 0; c--)
        {
            k = input4 >> c;
            if (k & 1)
                cout << "1";
            else
                cout << "0";
        }

        cout << endl;
    }
    else
        cout << "Invalid IP Address" << endl;
    return 0;
}