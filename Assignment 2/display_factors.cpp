// Program to find factors of a number

#include <iostream>
using namespace std;

int Display(int num)
{
    int iCount = 0;

    for(int iCnt = 1; iCnt <= num; iCnt++)
    {
        if(num % iCnt == 0)
        {
            cout << iCnt << "\t";
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int num = 0;
    int res = 0;

    cout << "Enter a number: ";
    cin >> num;

    res = Display(num);

    cout << "\nNumber of factors is: " << res;

    return 0;
}
