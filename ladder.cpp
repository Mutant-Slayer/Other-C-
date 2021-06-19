#include <iostream>
using namespace std;

int ladder(int n)
{
    /*if(n==1)
    return 1;
    else if(n==2)
    return 2;
    else if(n==3)
    return 4;*/
    if(n<0)
    return 0;

    if(n==0)
    return 1;
    else return ladder(n-1)+ladder(n-2)+ladder(n-3);
}

int main()
{
    cout <<ladder(4);

}