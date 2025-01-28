#include<iostream>
#include<string.h>
using namespace std;
int main()
{      
    char a[20],b[25];
    int x;
    cout<<"enter a word: ";
    gets(a);
    strcpy(b,a);
    strrev(b);
    x=strcmp(a,b);
    if(x==0)
    cout<<a<<"  is palindrome";
    else
    cout<<a<<" is not palindrome";
}