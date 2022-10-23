#include<bits/stdc++.h>
using namespace std;
int main()
{
    char so[100],data[100];
    cout<<"Enter the text: ";
     cin>>so;
    char flag,bit;
    cout<<"enter the flag: ";
    cin>>flag;
 
    int size=strlen(so);
 
     data[0]=flag;
    int i,j;
    for(i=0,j=1;i<size;i++)
    {
        if(so[i]=='k')
        {
         
            so[i]=0;
            i++;
            data[j]=so[i];
            j++;

        }
        else{
            data[j]=so[i];
            j++;
        }
    }
    data[j]=flag;
    data[j+1]='\0';
    cout<<data;
return 0;
}
