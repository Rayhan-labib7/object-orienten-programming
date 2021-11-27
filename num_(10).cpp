/*A class called Account,which......*/

#include<bits/stdc++.h>
using namespace std;

class Account
{
    int accountNumber;
    double balance;
    public :
    Account(int accountNumber,double balance)
    {
        this->accountNumber=accountNumber;
        this->balance=balance;
        current_balance();
    }
    void Creadit(double Add)
    {
        balance=balance+Add;
        current_balance();
    }
    void Debit(double substract)
    {
        if(substract>balance)
        {
            cout<<"Amount withdraw excceds the current balance"<<endl;
        }
        else
        {
            balance=balance-substract;
            current_balance();

        }
    }

    current_balance()
    {
        cout<<"A/C no:"<<accountNumber<<" "<<"Balance=$"<<balance<<endl;
    }



};


int main()
{

	Account ob(1234,10000.0);
	ob.Creadit(500);
	ob.Debit(1000);
	ob.Debit(10000);




}
