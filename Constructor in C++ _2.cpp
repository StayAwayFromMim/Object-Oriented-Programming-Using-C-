#include<iostream>
using namespace std;

class Addition
{
    public:
    int a,b,c;

    Addition()
    {
        cin>>a>>b;
        c=a+b;
        cout<<"The result is: "<<c;
    }

};

main()
{
  Addition ob;
}

