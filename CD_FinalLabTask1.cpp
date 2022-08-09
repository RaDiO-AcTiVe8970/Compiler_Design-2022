#include <iostream>
#include <string.h>

using namespace std;

bool isOperand(char c)
{
    return (c >= '0' && c <= '20');
}

int eval(char *s)
{
    if(*s=='\0')
    {
        return 0;
    }
    int top= s[0]-'0';
    for (int i = 1; s[i]; i += 2)
	{
		char opr = s[i], opd = s[i+1];

		if (!isOperand(opd))
        {
            return 0;
        }

		if (opr == '@')
        {
            top += (opd-'0');
        }
		else if (opr == '#')
        {
            top -= (opd-'0');
        }
		else if (opr == '&')
        {
            top *= (opd-'0');
        }
		else if (opr == '$')
        {
            top /= (opd-'0');
        }
		else
        {
            return 0;
        }
	}
	return top;
}

int main()
{
    char c[10];
    cout<<"Enter expression: ";
    cin>>c;
    if (eval(c)==0)
    {
        cout<<"Wrong expression format.";
    }
    else
    {
        cout<<"The evaluation of the expression "<<c<<" is = "<<eval(c);
    }
}
