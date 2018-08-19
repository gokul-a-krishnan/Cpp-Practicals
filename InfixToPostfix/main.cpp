#include <iostream>
#include <cstring>
using namespace std;
class expr
{
private:
    int sp;
    char infix[10],postfix[10],stack[10];
public:
    expr()
    {
        sp=0;
    }

    ~expr()
    {

    }

    void getexpr()
    {
        cout<<"Conversion of Infix to Postfix"<<endl;
        cout<<"Enter an Infix Expression :"<<endl;
        cin>>infix;
    }

    void dispexpr()
    {
        cout<<"Postfix of given "<<infix<<" is "<<postfix<<endl;
    }

    int precedence(char op)
    {
        if(op=='^')
            return 2;
        else if(op=='/' || op=='*')
            return 1;
        else if(op=='+' || op=='-')
            return 0;
        else
            return (-1);
    }

    void intopost()
    {
        int i=0,j=0;
        stack[sp]='(';
        sp++;
        i=strlen(infix);
        infix[i+1]='\0';
        infix[i]=')';
        i=0;
        while (sp!=0)
        {
            stack[sp]='\0';
            cout<<"Stack: "<<stack<<endl;
            if(isalpha(infix[i]))
            {
                postfix[j]=infix[i];
                i++;
                j++;
                continue;
            }
            else if(infix[i]=='(')
            {
                stack[sp]=infix[i];
                i++;
                sp++;
                continue;
            }
            else if(infix[i]==')')
            {
                sp--;
                while (stack[sp]!='(')
                {
                    postfix[j]=stack[sp];
                    j++;
                    sp--;
                }
                i++;
                continue;
            }
            else
            {
                sp--;
                while (precedence(stack[sp])>=precedence(infix[i]))
                {
                    postfix[j]=stack[sp];
                    j++;
                    sp--;
                }
                sp++;
                stack[sp]=infix[i];
                i++;
                sp++;
            }
        }
        postfix[j]='\0';
    }
};
int main() {
    expr e;
    e.getexpr();
    e.intopost();
    e.dispexpr();
    return 0;
}