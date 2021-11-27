/*consider the following class diagram and overlode 
stream extruction and insertion operator*/
#include<bits/stdc++.h>
using namespace std;
class Person
{
    int age;
    string name;
    public :
    Person()
    {

    }
    friend ostream & operator << (ostream &output,Person &p);
    friend istream & operator >> (istream &input,Person &p);
};

    ostream & operator <<(ostream &output,Person &p)
    {
        output<<"Hey my name is : "<<p.name<<" and my age is : "<<p.age<<endl;
        return output;
    }
    istream & operator >> (istream &input,Person &p)
    {
        input>>p.name>>p.age;
    }
int main()
{
    Person Labib;
    cout<<"Enter the name and age :"<<endl;
    cin>>Labib;
    cout<<Labib;
}
