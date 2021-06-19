#include<iostream>
using namespace std;

void brackets(char *output,int n,int open,int close,int i)
{
    if(i==2*n)
    {
        output[i]=='\0';
        cout <<output<<endl;
        return;
    }

    if(open<n)
    {
        output[i]='(';
        brackets(output,n,open+1,close,i+1);
    }
    if(close<open){
        output[i]=')';
        brackets(output,n,open,close+1,i+1);
    }
}

int main()
{
    char output[7];
    brackets(output,4,0,0,0);
}
