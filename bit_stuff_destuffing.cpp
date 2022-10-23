/*@athour....
Name: Md.Manzurul Alam
Dept. of CSE, GUB
ID:202902003
CSE 308 || Data Communication
*/
#include <iostream>
#include <string>
#define MAXSIZE 100

using namespace std;
int main()
{
    char *p, *q;
    char temp;
    char in[MAXSIZE];
    char stuff[MAXSIZE];
    char destuff[MAXSIZE];
    int count(0);
    cout << "Enter input string(0's & 1's only):" << endl;
    cin >> in;
    //stuffing on sender's site...........................................
    cout << "\n ---- After BitStuffing ----" << endl;
    p = in;
    q = stuff;

    while (*p != '\0')
    {
        if (*p == '0')
        {
            *q = *p;
            q++;
            p++;
        }
        else
        {
            while (*p == '1' && count != 5)
            {
                count++;
                *q = *p;
                q++;
                p++;
            }
            if (count == 5)
            {
                *q = '0';
                q++;
            }
            count = 0;
        }
    }
    *q = '\0';
    cout << "\n BitStuffed character string : " << stuff << endl;
    //destuffing on reciever's site..................................................
    cout << "\n ============== After BitDeStuffing  ===============" << endl;
    p = stuff;
    q = destuff;
    while (*p == '\0')
    {
        if (*p == '0')
        {
            *q = *p;
            q++;
            p++;
        }
        else
        {
            while (*p == '1' && count != 5)
            {
                count++;
                *q = *p;
                q++;
                p++;
            }
            if (count == 5)
            {
                p++;
            }
            count++;
        }
    }
    *q = '\0';
    cout << "\n BitDeStuffed character string :";
    cout << in;
}