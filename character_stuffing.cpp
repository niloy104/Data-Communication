#include <iostream>
using namespace std;
int main()
{
    char s[50], data[100];
    int i,j,n,m;
    cout<<"Enter Data"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    data[0] = 'D';
    data[1] = 'L';
    data[2] = 'S';
    data[3] = 'T';
    data[4] = 'E';
    data[5] = 'X';
    j = 6;
    m = 6;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='D' && s[i+1]=='L' && s[i+2]=='E')
        {
            data[j++] = 'D';
            data[j++] = 'L';
            data[j++] = 'E';
            data[j++] = 'D';
            data[j++] = 'L';
            data[j++] = 'E';
            i+=3;
            m+=6;
        }
        else{
            data[j++]=s[i];
            m++;
        }
    }
    data[m++] = 'D';
    data[m++] = 'L';
    data[m++] = 'E';
    data[m++] = 'E';
    data[m++] = 'T';
    data[m++] = 'X';
    cout<<endl;
    for(int i = 0;i<m;i++)cout<<data[i]<<" ";
    cout<<endl;
    return 0;
    return 0;
}