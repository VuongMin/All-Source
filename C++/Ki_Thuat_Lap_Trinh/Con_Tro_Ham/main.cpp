#include <iostream>

using namespace std;
int *tinhtong(int *a,int *b)
{
    return *a+*b;
}

int main()
{
    int a=5,b=3;
    int *p=tinhtong(a,b);
    return 0;
}
