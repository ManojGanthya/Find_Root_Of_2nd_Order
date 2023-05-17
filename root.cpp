#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    float a, b, c, d, Root, Root2;
    cout<<"We are find Root of aX*2 + bX + c = 0 root"<<endl<<"Let's say me Value of a -->";
    cin>>a;
    while (a == 0)
    {
        cout<<"If a = 0; then Equation will be linear."<<endl<<"Let's input an Non-zero a value --> ";
        cin>>a;
    }
    
    cout<<endl<<"Now say what is value of b -->";
    cin>>b;
    cout<<endl<<"Lastly say me, value of c -->";
    cin>>c;
    cout<<endl<<"Welcome, we are receive all value and your equation is "<<a<<"X*2 + "<<b<<"X + "<<c<<" = 0 ";
    cout<<endl<<"Now we are find root of this equation";
    d = (b*b) - (4*a*c);
   
    //cout<<d;
    if(d == 0){
        // Root are Real and same -b/a
        Root = - (b/a);
        cout<<"Root are -->> "<<Root<<", "<<Root;

    }else if(d > 0){
      // Root are real and different
      Root = (-b + sqrt(d))/a;
      Root2 = (-b - sqrt(d))/a;
      cout<<"Root are -->> "<<Root<<", "<<Root2;

    }else{
        // Root are complex
        cout<<"Root are complex";
        d = d * (-1);
        float Root11 = (-b/a);
        float Root12 = (sqrt(d)/a);
        cout<<"Root are -->>"<<Root11 <<" + i"<<Root12<<" and "<<Root11<<" - i"<<Root12;
    }

    return 0;
}
