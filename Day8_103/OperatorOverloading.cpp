#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    Complex();
    Complex(int,int);
    void display();
    Complex operator+(Complex&);
    Complex operator-(Complex&);
};
Complex::Complex()
{
    real=img=0;
}
Complex::Complex(int r,int i)
{
    real=r;
    img=i;
}
void Complex::display()
{
    if(img>0)
        cout<<real<<"+"<<img<<"i"<<endl;
    else
        cout<<real<<img<<"i"<<endl;
}
Complex Complex::operator+(Complex &c)
{
    Complex temp;
    temp.real=this->real+c.real;
    temp.img=this->img+c.img;
    return temp;
}
Complex Complex::operator-(Complex &c)
{
    Complex temp;
    temp.real=this->real-c.real;
    temp.img=this->img-c.img;
    return temp;
}
int main()
{
    Complex c1(2,3);
    Complex c2(6,1);
    Complex c3=c1+c2;//c3=c1.operator+(c2)
    c3.display();

    
    Complex c4(5,9);
    Complex c5(1,1);
    Complex c6=c4-c5;//c3=c1.operator-(c2)
    c6.display();
}