#include<iostream>
#include<string.h>

using namespace std;

int main()
{

    string a,s;

    cout<<"Enter regular expression: ";
    getline(cin, a);
    cout<<"Enter string: ";
    getline(cin, s);
    int temp=0;
    switch(a[1])
    {
    case 'U':
        if(s[0]=='a' || s[0]=='b')
        {
            if(s[1]=='a' || s[1]=='b')
            {
                temp=0;
            }
            else
            {
                temp=1;
            }
        }
        if(temp==1)
        {
            cout<<"Valid expression";
        }
        else{cout<<"Invalid Expression";}
        break;
    case '*':
        if(s.empty())
        {
            temp=1;
        }
        else
        {
            for(int i=0; i<s.length(); i++)
            {
                if(s[i]=='a')
                {
                    temp=1;
                }
                else
                {
                    temp=0;
                }
            }
        }
        if(temp==1)
        {
            cout<<"Valid expression";
        }
        else{cout<<"Invalid Expression";}
        break;
    case '+':
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='a')
            {
                temp=1;
            }
            else
            {
                temp=0;
            }
        }
        if(temp==1)
        {
            cout<<"Valid expression";
        }
        else{cout<<"Invalid Expression";}
        break;
    default:
        cout<<"Invalid Input";
    }

return 0;

}
