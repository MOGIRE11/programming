#include <iostream>
using namespace std ;

class bsort
{
private:
float values[10],temp;
int i,p;

public:
void display ();
void sortdata();
void input ();
};
    
 void bsort :: display()   
{
cout<<"\n";
for (i=0;i<9;i++)
{
cout<<values [i]<<"\t";
}
}

void bsort::input()
{
cout<<"input data \n";
for (i=0;i<10;i++)
{
cout<<"Enter data in cell "<<i <<" :"<<"\t";
cin>>values[i];
}
}

void bsort::sortdata ()
{
for(p=1;p<10;p++)
{
for (i=0;i<9;i++)
{
if (values [i] <values[i+1])
{
temp =values[i+1];
values [i+1]=values[i];
values [i]=temp;
}
}
}
}

int main()
{
bsort T;
T.input ();
cout <<"\n UNSORTED DATA";
T.display ();
T.sortdata();
cout <<"\n SORTED DATA ";
T.display ();
return 0;
}