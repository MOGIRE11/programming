#include <iostream>
using namespace std;

 class savingsAccount
 {
 private:
    string last_name,first_name,zipcode;
    double accnum,bal,rate;
 public:
   ~savingsAccount(){}
   savingsAccount(string,string,string);
   savingsAccount(string,string,string,double);
   void display();
   void deposit(double);
   void withdrawal(double);
 };

 savingsAccount::savingsAccount(string l,string f,string z)
 {
     last_name=l;
     first_name=f;
     zipcode=z;
     accnum=0;
     bal=0;
     rate=0;
 }

  savingsAccount::savingsAccount(string l,string f,string z,double acc)
 {
     last_name=l;
     first_name=f;
     zipcode=z;
     accnum=acc;
     bal=100;
     rate=0.03;
 }
 void savingsAccount::deposit(double amt)
 {
     bal+=amt;
 }
  void savingsAccount::withdrawal(double amt)
 {
     bal-=amt;
 }

 void savingsAccount::display()
 {
     cout<<"~~~ CUSTOMER DETAILS ~~~ \n";
    cout<<"Last name: "<<last_name<<endl;
    cout<<"First name: "<<first_name<<endl;
    cout<<"Zipcode: "<<zipcode<<endl;
    cout<<"Account number: "<<accnum<<endl;
  /*  cout<<"Balance: "<<bal<<endl;
    cout<<"Interest rate: "<<rate<<endl;
    cout<<"Withdrawal: "<<bal<<endl;
    cout<<"Deposit: "<<bal;*/
    cout<<"\n";
 }

int main()
{
    string l,f,z;
    int x;
    double amt;
    char ans;
    cout<<"Enter your details : \n";
    cout<<"Enter first name: "<<f;
    cout<<"\n Enter last name: "<<l;
    cout<<"\n Enter zipcode: "<<z;
     savingsAccount acc1(l,f,z);
    cout<<"CURRENT ACCOUNT DETAILS: \n";
    acc1.display();
    do
    {

cout<<"Instructions \n";
    cout<<"1.press 1 to deposit \n2.press 2 to withdraw \n3.press any key to check balance"<<endl;
    cout<<"\n";
    cin>>x;
    if (x==1)
    {
        cout<<"Enter the amount to deposit: "<<endl;
        cin>>amt;
        acc1.deposit(amt);
    }
    else if (x==2)
        {
        cout<<"Enter the amount to withdraw: "<<endl;
        cin>>amt;
        acc1.withdrawal(amt);
        }

        else
        {
          cout<<"CURRENT ACCOUNT DETAILS: \n";
          acc1.display();
        }
        cout<<"\n Do you want to perform another transaction y/n (y -> YES/n -> NO)"<<endl;
    cin>>ans;
    }
 while (ans=='y');


   /*savingsAccount acc2("John","Doe","MMU",1000);
   acc1.display();
   cout<<endl;
   acc2.display();
   acc1.deposit(2000);
   acc1.withdrawal(1000);
   acc1.display();*/
    return 0;
}
