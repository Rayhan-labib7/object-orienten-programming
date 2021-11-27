//consider the following class diagram and write the c++ code
//to overlode the operator using friend function and
//short hand operator .where display function show the value of mark
//after adding bonus mark 20 and after deleting minus marlk 10

#include<bits/stdc++.h>
using namespace std;
class Marks
{
    int mark;
    public :
    Marks()
    {

    }
    Marks(int mark)
    {
        this->mark=mark;
    }
    void display()
    {
        cout<<"My current marks :"<<mark<<endl;
    }
    void operator+=(int bonousmark)
    {
        mark=mark+bonousmark;
    }
    friend void operator-=(Marks &currobj,int Minus);

};
void operator-=(Marks &currobj,int Minus)
{
    currobj.mark-=Minus;
}
int main()
{
    Marks ob(30);
    ob.display();
    ob+=20;
    ob.display();
    ob-=10;
    ob.display();
}
