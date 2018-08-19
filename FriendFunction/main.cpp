#include <iostream>
using namespace std;
class two;
class one{
    int a;
public:
    one(){
        a=10;
    }
    friend void fun(one A,two B);
};
class two{
    int b;
public:
    two(){
        b=20;
    }
    friend void fun(one A,two B);
};
void fun(one A,two B){
    int c;
    c=A.a+B.b;
    cout<<"addition :"<<c;
}
int main() {
    one a;
    two b;
    fun(a,b);
    return 0;
}