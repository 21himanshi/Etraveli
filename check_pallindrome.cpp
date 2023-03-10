/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    string str;
    int n=0;
    int flag;
    
    cout<<"\nEnter the String: ";
    cin>>str;
    for(int i=0;str[i]!=NULL;i++)
    {
        n++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(str[i]==str[j])
            {
                flag=0;
            }
            else
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        cout<<"\nString is Pallindrome!";
    }
    else
    {
        cout<<"\nString is not pallindrome!";
    }
    

    return 0;
}