#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{

    int q;
    cin >>q;
    string s;

    int n,index=0,count=0;
    n=q;
    vector <int> mark(26,0);

    while(q--)
    {
    
    cin >>s;
    for(int i=0;i<s.size();i++)
    {
        index=s[i]-'a';
        mark[index]++;
    }
    
    }

    for(int i=0;i<mark.size();i++)
    {
        if(mark[i]==n)
        count++;
        else continue;
    }

    cout << count;

}
