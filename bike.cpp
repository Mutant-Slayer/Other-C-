#include <iostream>
using namespace std;

int bike(int n)
{
    if(n<0)
    return 0;
    
    if(n==1||n==0)
    return 1;
    else return bike(n-1)+(n-1)*bike(n-2);
}

int main()
{
    cout <<bike(3);

}