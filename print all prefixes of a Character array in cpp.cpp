#include<iostream>
using namespace std;

void printAllPrefixes(char input[])
{
    for(int i=0;input[i]!='\0';i++)//this loop tell the end (kaha tk print krana hai)
    {
        for(int j=0;j<=i;j++)//this loop start for starting index..
        {
            cout<<input[j];
        }
        cout<<endl;
    }
}
int main()
{
    char input[100]="abcd";
    printAllPrefixes(input);
}
