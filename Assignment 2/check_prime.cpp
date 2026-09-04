// Write a program to check the number is prime or not

#include<iostream>
using namespace std;

bool checkprime(int num)
{
    int icount=0;
    for(int icnt=2;icnt<(num);icnt++)
    {
        if((num % icnt==0))
        {
            icount++;
            break;
        }
    }

    if(icount==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num=0;
    bool bRet=0;

    cout<<"Enter a nmber";
    cin>>num;

    bRet=checkprime(num);

    if(bRet==true)
    {
        cout<<"Number is prime";
    }
    else
    {
        cout<<"Number is not prime";
    }

    return 0;
}

