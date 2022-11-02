#include <iostream>
using namespace std;

class date
{
private:
   int month;
   int day;
   int year;
public:
    ~date(){};
    date()
    {
        month=1;
        day=1;
        year=2000;
    }
    
    date(int m,int d,int y)
    {
        month=m;
        day=d;
        year=y;
    }
    
    void display()
    {
        cout<<"Today's date :";
        cout<<month<<" / "<<day;
        cout<<"/"<<year<<endl;
    }
};

int main()
{
    date d1;
    date d2(10,25,2022);
    d1.display();
    d2.display();
    return 0;
}


