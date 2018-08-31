#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100]="xyz";
    int x=strlen(str);
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<=x-i;j++)
        {
         for(int k=j;k<=i+j-1;k++)
         {
             cout<<str[k];
         }
         cout<<endl;
        }
    }
}
