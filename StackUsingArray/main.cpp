#include <iostream>
using namespace std;
class st
{
public:
    int a[10],n,m,top;

    st()
    {
        n=5;
        top=0;
    }
    void push();
    void pop();
    void display();
};

void st::push()
{
    if(top==n)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        cout << "Enter the Value:" << endl;
        cin >> m;
        a[top] = m;
        top++;
    }
}

void st::pop()
{
    int b;
    if(top==0)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        top--;
        b=a[top];
        cout<<"The Deleted Element is "<<b<<endl;
    }
}

void st::display()
{
    if(top==0)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        cout<<"Elemnets in Stack are :"<<endl;
        for(int i=top-1;i>=0;i--)
        {
            cout<<a[i]<<endl;
        }
    }
}

int main()
{
    st ob;
    int ch;
    cout<<"Stack Operation"<<endl;
    do
    {
        cout<<"1.Push \t 2.Pop \t 3.View \t 4.Exit"<<endl;
        cin>>ch;
        switch (ch)
        {
            case 1:
                ob.push();
                break;
            case 2:
                ob.pop();
                break;
            case 3:
                ob.display();
                break;
            case 4:
                break;
        }
    }
    while (ch<=3);
    return 0;
}