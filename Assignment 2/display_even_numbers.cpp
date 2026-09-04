//Input 10
// 2    4   6   8   10

#include<iostream>
using namespace std;

void Display(int num)
{
    for(int iCnt=2;iCnt<=num;iCnt=iCnt+2)
    {
        cout<<iCnt<<"\t";
    }
}

int main()
{
    int num=0;

    cout<<"Enter a number:";
    cin>>num;

    Display(num);
    
    return 0;
}