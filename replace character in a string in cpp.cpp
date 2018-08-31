#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100],x,repl;
    cin>>str;
    cin>>x;
    cin>>repl;
    for(int i=0;str[i]!='\0';i++)
    {

            if(str[i]==x)
            {

                str[i]=repl;
            }

    }
  for(int i=0;str[i]!='\0';i++)
  {
     cout<<str[i];
  }
}
