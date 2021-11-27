//create 3 object ob1,ob2,bo3 of this class and create ob4 as the summation of this three object

#include<bits/stdc++.h>
using namespace  std;
class marks
{
    public:
    int marks1;
    int marks2;
    marks()
    {

    }
    marks(int marks1,int marks2)
    {
        this->marks1=marks1;
        this->marks2=marks2;
    }
    void display()
    {
        cout<<marks1<<" "<<marks2<<endl;
    }
    marks operator+(marks receive)
    {
        marks temp;
        temp.marks1=marks1+receive.marks1;
        temp.marks2=marks2+receive.marks2;
        return temp;
    }

};
int main()
{
    //Labib here
    marks ob1(5,10),ob2(15,20),ob3(25,30),ob4;
    ob4=ob1+ob2+ob3;
    ob4.display();
}

