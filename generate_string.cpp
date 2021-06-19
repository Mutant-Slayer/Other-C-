#include <iostream>
using namespace std;


void generate_string(int i,int j,char *in,char *out)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout <<out<<endl;
        return;
    }

    int digit=in[i]-'0';
    char ch=digit+'A'-1;
    out[j]=ch;
    generate_string(i+1,j+1,in,out);

    if(in[i+1]!='\0')
    {
        int second=in[i+1]-'0';
        int no=digit*10+second;
        if(no<=26)
        {
            ch=no+'A'-1;
            out[j]=ch;
            generate_string(i+2,j+1,in,out);
        }
    }
    return;
    
}

int main()
{
    char input[100]="1234",output[100];
    

    generate_string(0,0,input,output);
}