//Declare display function as friend function and also explain whwn we need to used frinend function

#include<bits/stdc++.h>
using namespace std;
class Human
{
    public :
    int age;
    string name;
    void Set(int age,string name)
    {
        this->age=age;
        this->name=name;
    }
    friend void display(Human man);
};
void display(Human man)
{
    cout<<man.age<<" "<<man.name<<endl;
}
int main()
{
    Human ob;
    ob.Set(23,"labib");
    display(ob);

}
