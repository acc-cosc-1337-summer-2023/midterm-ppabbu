#include <iostream>
#include "question1.h"
using namespace std;

int doubler(int &value1, int &value2)
{
    value1=value1*2;
    value2=value2*3;
    cout<<value1<<" "<<value2<<endl;

}
int main()
{
    int num1=2;
    int num2=3;
    
    doubler(num1,num2);

    cout<<num1<<" "<<num2;
    
    int num = 5;
    cout<<num<<endl;
    methodM(num);
    cout<<num<<endl;

    return 0;
}