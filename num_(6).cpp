/*consider the following class diagram and write c++ 
code by applying overloding c++ function call operator*/

#include<bits/stdc++.h>
using namespace std;
class Marks
{
    int marks;
    public :
    Marks()
    {

    }
    Marks(int marks)
    {
        this->marks=marks;
    }
    void display()
    {

        cout<<"My Marks : "<<marks<<endl;
    }
    Marks operator()(int marks_call)  //here operator function call
    {
        cout<<"operator function called :"<<endl;
        Marks Temp;
        Temp.marks=marks_call;
        return Temp;
    }
};
int main()
{
    Marks ob(50),ob1;
    ob.display();
    ob1=ob(80);   // function call
    ob1.display();

}
