#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20];
    int i,v=0,s=0,c=0;
    cout<<"enter a word: ";
    gets(a);
    for(i=0;a[i]>=strlen(a)-1;i++)
   { 
    if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
    c++;
    else
    v++;
    if(a[i]==' ')
    s++;
    }
    cout<<"number of vowels is = "<<v<<"\n";
    cout<<"number of consonants is = "<<c<<"\n";
    cout<<"number of space is = "<<s;
    
}