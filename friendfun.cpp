#include<iostream>
using namespace std;
class A
{
public:
int a=10;
int b=20;
int c;
friend void swap(A &t);
void display()
{
cout<<"value of a="<<a;
cout<<"value of b="<<b;
}
};
void swap (A &t)
{
t.c=t.a;
t.a=t.b; 
t.b=t.c;
}
int main()
{
A t;
swap(t);
t.display();
return 0;
}
