#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cin.getline(str,100);
    int i=0,j=0,count=1;
    char temp;
   while(str[i]!='\0')
	{
		temp=str[i];
		count=1;
		 while(str[i+1]==temp)
		{
			count++;
			i++;
		}
		str[j]=temp;
		j++;
		if(count>1)
		{
		str[j]=count+'0';
		j++;
		}
		i++;
	}
	str[j]='\0';
	cout<<str;
}



