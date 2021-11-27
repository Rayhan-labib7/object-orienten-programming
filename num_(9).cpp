/*A class call circle is to be .....*/


#include <bits/stdc++.h>

using namespace std;

class Circle
{
     public :
     double redius;
     string color;
     Circle(){}
     Circle(double redius,string color)
     {
         this->redius=redius;
         this->color=color;
     }

     double getRadius()
     {
        return redius;
     }
     string getcolor()
     {
         return color;
     }
     double getArea()
     {
        return (3.1416)*(redius)*(redius);
     }

};

int main()
{
	Circle c1(2.0,"Red"),c2(3.0,"Green"),c3(4.0,"Yallow");
	cout<<"First object"<<endl;
	cout<<"Redius : "<<c1.getRadius()<<endl;
	cout<<"Color :  "<<c1.getcolor()<<endl;
	cout<<"Redius : "<<c1.getArea()<<endl;
	//similar second and third object output

}
