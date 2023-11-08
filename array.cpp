#include<iostream>
using namespace std;

class b;
class a{
private:
int a1[10];
public:

void get(){
       cout<<"enter value for array a: "<<endl;
    for(int i=0;i<3;i++){
    cin>>a1[i];
    }
}
friend void swap(a &A,b &B);
};

class b{
private:
int b1[3];
public:

void get(){
    cout<<"enter value for array b: "<<endl;
    for(int i=0;i<3;i++){
    cin>>b1[i];
    }
}
friend void swap(a &A,b &B);
};
void swap(a &A,b &B)
{
     cout<<"value before swap of array a[]"<<endl;
    for(int i=0;i<3;i++)
        {
            cout<<A.a1[i]<<" ";
        }
    cout<<"\nvalue before swap of array b[]"<<endl;
    for(int i=0;i<3;i++)
        {
            cout<<B.b1[i]<<" ";
        }
    
    for(int i=0;i<3;i++)
        {
            int temp=A.a1[i];
            A.a1[i]=B.b1[i];
            B.b1[i]=temp;
    
        }
    cout<<"\nvalue after swap of array a[]"<<endl;
    for(int i=0;i<3;i++)
        {
            cout<<A.a1[i]<<" ";
        }
    cout<<"\nvalue after swap of array b[]"<<endl;
    for(int i=0;i<3;i++)
        {
            cout<<B.b1[i]<<" ";
        }
    
}
int main()
{
    a obj;
    b obj1;
    obj.get();
    obj1.get();
    swap(obj,obj1);
  return 0;
    
}
