
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
