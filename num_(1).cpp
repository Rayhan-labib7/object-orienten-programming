//Base class function are declared as pure virtual function and write c++ code

#include<bits/stdc++.h>
using namespace std;
class Person
{
    public :
    virtual void Set(int,string)=0;
    virtual void Introduce()=0;
};
class Student:Public Person
{
    public :
    int Sage;
    string Sname;
    void Set(int Sage,string Sname)
    {
        this->Sage=Sage;
        this->Sname=Sname;
    }
    void Introduce()
    {
        cout<<"Hello i am student :"<<endl;
    }
    void displaystudent()
    {
        cout<<"Age : "<<Sage<<endl<<"Name :"<<Sname<<endl;
    }
};
class Teacher:Public Person
{
    public :
    int Tage;
    string Tname;
    void Set(int Tage,string Tname)
    {
        this->Tage=Tage;
        this->Tname=Tname;
    }
    void Introduce()
    {
        cout<<"Hello Teachers :"<<endl;
    }
    void displayteacher()
    {
        cout<<"Age : "<<Tage<<endl<<"Name : "<<Tname<<endl;
    }
};
int main()
{
    Student ob1;      //Student class object
    ob1.Set(23,"Labib");
    ob1.Introduce();
    ob1.displaystudent();

    Teacher ob2;    //Teacher class object
    ob2.Set(35,"Respectable Teachers");
    ob2.Introduce();
    ob2.displayteacher();

}
