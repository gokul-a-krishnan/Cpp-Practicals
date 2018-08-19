#include <iostream>
using namespace std;
#define max 10
class expr{
    char str[max];
public:
    expr(){

    }

    ~expr(){

    }

    void input();
    void eval();
    int calc(int, char, int);
};

void expr::input() {
    cout<<"Enter Expression in Postfix:"<<endl;
    cin>>str;
}

void expr::eval() {
    int i=0,j=0,stk[max],item1,item2;
    char ch;
    while (str[j]!='\0'){
        ch=str[j];
        if ((ch>47) && (ch<58)){
            stk[i]=ch-48;
            i++;
        }
        else{
            i--;
            item1 = stk[i];
            i--;
            item2 = stk[i];
            stk[i] = calc(item2,str[j],item1);
            i++;
        }
        j++;
    }
    cout<<"Evaluated value: "<<stk[0];
}

int expr::calc(int x, char op, int y) {
    int ans;
    switch (op){
        case '+': ans = x+y;
            break;
        case '-': ans = x-y;
            break;
        case '*': ans = x*y;
            break;
        case '/': ans = x/y;
            break;
        case '^': ans = x^y;
            break;
    }
    return ans;
}

int main() {
    expr e;
    cout<<"Postfix Evaluation:"<<endl;
    e.input();
    e.eval();
    return 0;
}