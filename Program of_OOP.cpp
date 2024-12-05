#include<iostream>
using namespace std;

class Addition
{
    public:
    int c;

    void result(int a, int b) //FORMAL PARAMITER
    {
        c = a+b;
        cout<<"The result is: "<<c;

    }

};

main()
{
        Addition ob;
        int a,b;
        cin>>a>>b;

        ob.result(a,b); //ACTUAL PARAMITER
}
