#include<iostream>
using namespace std;

int sum(int num1 ,int num2);//Function prototype
                            //num1 , num2 - argument/ Formal Parameters
int main()
{
    int a , b, result;
    cin>>a>>b;

    result = sum(a,b);
    cout<<"The Result is: "<<result;
}
int sum(int num1,int num2)
{

    int num3;
    num3 = num1 + num2;
    return num3;

}
