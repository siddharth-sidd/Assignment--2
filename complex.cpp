#include<iostream>
using namespace std;
class complex
{
    private:
      int  a,b;
    public:
        void setdata(int x,int y){
            a=x;
            b=y; }
          void showcomplex(complex s){
             cout<<a<<"+"<<b<<"i"<<endl;
             cout<<s.a<<"+"<<s.b<<"i"<<endl;}
        void showdata(){
            cout<<"sum of both complex number is :"<<endl;
            cout<<a<<" + "<<b<<"i"<<endl; }
        complex add(complex c){
            complex  temp;
              temp.a=a+c.a;
              temp.b=b+c.b;
             
            return temp;  }
};
int main()
{
    complex c1,c2,c3;
      c1.setdata(1,2);
      c2.setdata(3,4);
        c1.showcomplex(c2);
       c3=c1.add(c2);
      c3.showdata();      
      
        return 0;
}