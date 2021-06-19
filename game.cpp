#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> v1;
    vector <int> v2;
    int k=15;
    int temp=0;
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(8);

    v2.push_back(2);
    v2.push_back(10);

    v1.insert(v1.end(),v2.begin(),v2.end());
    sort(v1.begin(),v1.end());

    int i=0;

    while(i<v1.size()&&temp<=k)
    {
        if(temp+v1.at(i)<=k)
        {
            temp+=v1.at(i);
            
            i++;
        }
    }

    cout <<i;

    
}