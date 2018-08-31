#include<iostream>
#include <string.h>
using namespace std;
void printReverse(char str[])
{
    int length = strlen(str);
    int i;
    for (i = length - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[i] = '\0';
            cout<<(&str[i]+1)<<" ";
        }
    }
    cout<<str;
}
int main()
{
    char str[100];
    cin.getline(str,100);
    printReverse(str);
    return 0;
}
