#include<iostream>
using namespace std;

class Addition
{
    public:
    int a;

    Addition(int b, int c)
    {
        a = b + c;
        cout<<"The result is: "<<a;
    }


};


main()
{
    int b,c;
    cin>>b>>c;
    Addition(b,c);
}
