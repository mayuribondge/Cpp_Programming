#include<iostream>

int DisplayDigit(int iNo)
{
    int iDigit=0,iCount=0;

    while(iNo!=0)
    {
        iDigit=iNo % 10;
        std::cout<<iDigit;
        iNo=iNo/10;
        iCount++;
    }

    return iCount;
}

int main()
{
    int iNo=0,iRet=0;

    std::cout<<"Enter a number";
    std::cin>>iNo;

    iRet=DisplayDigit(iNo);

    std::cout<<"Number of digit is:"<<iRet;

    return 0;
}