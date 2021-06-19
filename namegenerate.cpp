#include<iostream>
using namespace std;

char keyword[][10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(int i,int j,char *input,char *output)
{
    if(input[i]=='\0')
    {
        output[j]='\0';
        cout <<output<<endl;
        return;
    }

    int digit=input[i]-'0';
    if(digit==0||digit==1)
    keypad(i+1,j,input,output);


    for(int k=0;keyword[digit][k]!='\0';k++)
    {
        output[j]=keyword[digit][k];
        keypad(i+1,j+1,input,output);
    }
    return ;

}

int main()
{
    char in[100]="623",out[100];

    keypad(0,0,in,out);
}
