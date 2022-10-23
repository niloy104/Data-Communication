#include <iostream>
#include<string>
using namespace std;

int main()
{
    string stream ,stuffedStream;
    cout<<"Enter the stream of bits:";
    cin>>stream;
    stuffedStream=stream;
    int count=0, j,appendedBit=0;
    int l=stream.length();
    for(int i=0; i<stream.length(); i++)
    {
        if(stream[i]=='1')
            count++;
        if(stream[i]=='0')
            count=0;
        if(count==5)
        {
            count=0;
            stuffedStream+="0";
            l++;
            appendedBit++;
            j=l;
            while(j>i+2)
            {
                stuffedStream[j-1]=stuffedStream[j-2];
                j--;
            }
            stuffedStream[i+appendedBit]='0';
        }
    }
    cout<<"Output stream after bit stuffing:"<<stuffedStream;
    return 0;
}