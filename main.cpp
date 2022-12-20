#include <iostream>
#include <cmath>
using namespace std;

float f( float a){
    float y=0;
    y= ((a*a)* cos(a))+1;
    return y;

int main() {
    float a=0, b=0, x,err;
    while((f(a)* f(b))>=0){
        cout<<"inserire estremi"; cin>>a>>b;
    }
    x=(a+b)/2;
    while ((f(x)!=0)and(err<(1/(exp(6))))){
        x=(a+b)/2;
        if ((f(x)*f(b))<0){
            b=x;
        }else{
            a=x;
        }
        err= abs((b-a)/2);
    }
        cout<<x<<endl;
    x=x*10000;
    x=(int)x;
    x=x/10000;
    cout<< x;


    return 0;
}
  
