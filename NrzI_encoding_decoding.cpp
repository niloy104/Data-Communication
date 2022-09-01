/*@athour....
Name: Md.Manzurul Alam
Dept. of CSE, GUB
ID:202902003
CSE 308 || Data Communication
*/

#include <bits/stdc++.h>
using namespace std;
string encoding1(string str)
{
    // if initial state H
    string data1;
    for (int i = 0; i < str.length(); i++)
    {
        bool prv;
        if (i == 0)
        {
            if (str[i] == '0')
            {
                data1.push_back('H');
                prv = 1;
            }
            else
            {
                data1.push_back('L');
                prv = 0;
            }
        }
        else if (str[i] == '0')
        {
            if (prv == 0)
            {
                data1.push_back('L');
            }
            else
            {
                data1.push_back('H');
            }
        }

        else if (str[i] == '1')
        {
            if (prv == 0)
            {
                data1.push_back('H');
                prv = 1;
            }
            else
            {
                data1.push_back('L');
                prv = 0;
            }
        }
    }

    return data1;
}
string encoding2(string str)
{
    // If initial state is L
    string data1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'L')
        {
            data1.push_back('H');
        }
        if (str[i] == 'H')
        {
            data1.push_back('L');
        }
    }
    return data1;
}
string decoding1(string str)
{
    string data1;
    for (int i = 0; i < str.length(); i++)
    {
        char prv;
        if (i == 0)
        {
            if (str[i] == 'L')
            {
                data1.push_back('1');
                prv = 'L';
            }
            else
            {
                data1.push_back('0');
                prv = 'H';
            }
        }
        else if (str[i] == prv)
        {
            data1.push_back('0');
            prv = str[i];
        }
        else if (str[i] != prv)
        {
            data1.push_back('1');
            prv = str[i];
        }
    }
    return data1;
}
string decoding2(string str)
{
    // If initial state is L
    string data1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
        {
            data1.push_back('1');
        }
        if (str[i] == '1')
        {
            data1.push_back('0');
        }
    }
    return data1;
}
int main()
{
    // encoding part.........
    string str1;
    cout << "Enter a data for encoding: ";
    cin >> str1;
    string ans1 = encoding1(str1);
    cout << "The encoding data is (if intial state is H): " << ans1 << endl;
    string ans2 = encoding2(ans1);
    cout << "The encoding data is (if intial state is L): " << ans2 << endl;
    cout << endl;
    // decoding part......
    string str2;
    cout << "Enter a data for Decoding: ";
    cin >> str2;
    string ans3 = decoding1(str2);
    cout << "The Decoding data is (if intial state is H): " << ans3 << endl;
    string ans4 = decoding2(ans3);
    cout << "The decoding data is (intial state is L): " << ans4 << endl;
}
