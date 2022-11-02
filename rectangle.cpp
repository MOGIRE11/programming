#include <iostream>
using namespace std;

class rectangle
{
private:
    double length,width;
public:
    double calc_per();
    double calc_area();
    void read_data();
    void display();
};

void rectangle::read_data()
{
    cout<<"Enter the length: "<<endl;
    cin>>length;
    cout<<"Enter the width: "<<endl;
    cin>>width;
}

double rectangle::calc_per()
{
    return (2*(length+width));
}

double rectangle::calc_area()
{
    return (length*width);
}

void rectangle::display()
{
    cout<<"Length: "<<length<<endl;
    cout<<"Width: "<<width<<endl;
    cout<<"Perimeter: "<<calc_per()<<endl;
    cout<<"Area: "<<calc_area()<<endl;
}

int main()
{
    rectangle R;
    cout<<"welcome \n";
    R.read_data();
    cout<<"\n";
    R.display();
    return 0;
}