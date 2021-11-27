//Declare Address class inside the student clas ansd write c++

#include<bits/stdc++.h>
using namespace std;
class Student
{
    public :
    int Sage;
    string Sname;
    void Set(int Sage,string Sname)
    {
        this->Sage=Sage;
        this->Sname=Sname;
    }
    void displaystudent()
    {
        cout<<"Age :"<<Sage<<endl<<"Name :"<<Sname<<endl;
    }
    class Address
    {
        public :
        int housebumber;
        string countryname;
        void Set(int housebumber,string countryname)
        {
            this->housebumber=housebumber;
            this->countryname=countryname;
        }
        void displaystudent()
        {
            cout<<"House : "<<housebumber<<endl<<"Country : "<<countryname<<endl;
        }
    };
    Address ob1;
};
int main()
{
    Student ob;
    ob.Set(23,"Labib");
    ob.displaystudent();

    ob.ob1.Set(50,"Bangladesh");
    ob.ob1.displaystudent();
}
