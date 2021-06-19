#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    cin >>v[i];
	
	vector<int>::iterator it;
    /*for(it=v.begin();it!=v.end();it++)
    {
        if((*it)==*(it+1))
        v.erase(it);
    }*/
    for(it=v.begin();it!=v.end();it++)
    cout <<(*it);

}

