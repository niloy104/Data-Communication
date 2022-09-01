/*@athour....
Name: Md.Manzurul Alam
Dept. of CSE, GUB
ID:202902003
CSE 308 || Data Communication
*/

#include <bits/stdc++.h>
using namespace std;
string encoding(string str)
{
    string data;

    for (int i = 0; i < str.length(); i++)
    {
        bool prv;
        if (i == 0)
        {
            if (str[i] == '1')
            {
                data.push_back('H');
                data.push_back('L');
                prv = 1;
            }
            else
            {
                data.push_back('L');
                data.push_back('H');
                prv = 0;
            }
        }
        else if (str[i] == '1')
        {
            if (prv == 1)
            {
                data.push_back('L');
                data.push_back('H');
                prv = 0;
            }
            else
            {
                data.push_back('H');
                data.push_back('L');
                prv = 1;
            }
        }

        else if (str[i] == '0')
        {
            if (prv == 1)
            {
                data.push_back('H');
                data.push_back('L');
                prv = 1;
            }
            else
            {
                data.push_back('L');
                data.push_back('H');
                prv = 0;
            }
        }
    }
    return data;
}
string decoding(string str)
{
    string data;
    for (int i = 0; i < str.length(); i = i + 2)
    {
        bool prv;
        if (i == 0)
        {
            if (str[i] = 'H')
            {
                data.push_back('1');
                prv = 1;
            }
            else
            {
                data.push_back('0');
                prv = 0;
            }
        }
        else if (str[i] == 'H')
        {
            if (prv == 1)
            {
                data.push_back('0');
                prv = 1;
            }
            else
            {
                data.push_back('1');
                prv = 1;
            }
        }

        else if (str[i] == 'L')
        {
            if (prv == 1)
            {
                data.push_back('1');
                prv = 0;
            }
            else
            {
                data.push_back('0');
                prv = 0;
            }
        }
    }
    return data;
}
int main()
{
    string str1;
    cout << "Enter a data for encoding: ";
    cin >> str1;
    cout << "The Encoding data is: ";
    cout << encoding(str1) << endl;

    string str2;
    cout << "Enter a data for decoding: ";
    cin >> str2;
    cout << "The Decoding data is: ";
    cout << decoding(str2) << endl;
}