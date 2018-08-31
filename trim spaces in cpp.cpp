#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j=0,x;
    char str[100];
    cin.getline(str,100);
    x=strlen(str);
    for(int i=0;i<x;i++)
    {
        if(str[i]==' ')
        {
            for(int j=i;j<x;j++)
            {
                 str[j]=str[j+1];
            }
             x--;
        }

    }
    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i];
    }
}
