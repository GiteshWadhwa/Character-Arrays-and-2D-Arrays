#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int flag;
 char arr1[100];
 char arr2[100];
 cin.getline(arr1,100);
 cin.getline(arr2,100);

 int first[26]={0};
 int second[26]={0};
 int c=0;
 while(arr1[c]!='\0')
 {

     first[arr1[c]-'a']++;
     c++;
 }
 c=0;
 while(arr2[c]!='\0')
 {
     second[arr2[c]-'a']++;
     c++;
 }
 for(c=0;c<26;c++)
 {
     if(first[c]!=second[c])
     {
         flag=1;
         break;
     }
 }
 if(flag==1)
 {
     cout<<"0";
 }
 cout<<"1";
 }

