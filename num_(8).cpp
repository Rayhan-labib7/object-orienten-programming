/*Explain the use of stringstream class and write c++ code using this class */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Integer to srting
    int input;
    cin>>input;
    stringstream ob;
    ob<<input;
    string str;
    ob>>str;
    cout<<"Integer : "<<input<<" "<<"convert String : "<<str<<endl;

    //not let's string to integer

    string sstr;
    cin>>sstr;
    stringstream ob1;
    ob1<<sstr;
    int integer;
    ob1>>integer;
    cout<<"String : "<<sstr<<" "<<"Convert Integer : "<<integer<<endl;
}
