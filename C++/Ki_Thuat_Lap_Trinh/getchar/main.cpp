//#include <iostream>
//#include<conio.h>
//#include<stdio.h>
//using namespace std;
//
//int main()
//{
//    int x;
//    char ten[100];
//    int i=0;
//    while((x=getchar())!='\n')
//    {
//        ten[i]=x;
//        ++i;
//
//    }
//    cout<<ten;
//   // cin>>x;
//
//
//    return 0;
//}
///Dem so TU,kitu,So hang

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int c,nline,nchar,nword,state;
    state=0;
    nline=nword=nchar=0;
    while((c=getchar())!=EOF)
    {
        nchar++;
        if(c=='\n')
        nline++;
        else if(c==' '||c=='\n'||c=='\t')
        {
            state=0;
        }
        else if(state==0)
        {
            nword++;
            state=1;
        }

    }

cout<<"\n line ="<<nline<<"\n word ="<<nword<<"\n kitu "<<nchar;

    return 0;
}







