#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
    srand(time(0));
    char l[10][5];
    int temp1 = 0,temp2 = 0;
    for(int b = 0; b<5; b++)
    {
    for(int a = 0; a<10; a++)
    {
        l[a][b] = rand()%26+65;
        cout<<l[a][b];
        if(a==4)
            cout<<" ";
    }
    cout<<endl;
    }
    cout<<"----------------------------"<<endl;
    for(int v = 0; v<5; v++)
    {
        while(true!=false)
        {
            if(l[0][v]<'H')
            {
                l[0][v]++;
            }
            else if(l[0][v]>'H')
            {
                l[0][v]--;
            }
            else if(l[0][v]=='H')
            {
                temp1++;
            }
            cout<<l[0][v];
            if(l[1][v]<'E')
            {
                l[1][v]++;
            }
            else if(l[1][v]>'E')
            {
                l[1][v]--;
            }
            else if(l[1][v]=='E')
            {
                temp1++;
            }
            cout<<l[1][v];
            if(l[2][v]<'L')
            {
                l[2][v]++;
            }
            else if(l[2][v]>'L')
            {
                l[2][v]--;
            }
            else if(l[2][v]=='L')
            {
                temp1++;
            }
            cout<<l[2][v];
            if(l[3][v]<'L')
            {
                l[3][v]++;
            }
            else if(l[3][v]>'L')
            {
                l[3][v]--;
            }
            else if(l[3][v]=='L')
            {
                temp1++;
            }
            cout<<l[3][v];
            if(l[4][v]<'O')
            {
                l[4][v]++;
            }
            else if(l[4][v]>'O')
            {
                l[4][v]--;
            }
            else if(l[4][v]=='O')
            {
                temp1++;
            }
            cout<<l[4][v]<<" ";
            if(l[5][v]<'W')
            {
                l[5][v]++;
            }
            else if(l[5][v]>'W')
            {
                l[5][v]--;
            }
            else if(l[5][v]=='W')
            {
                temp1++;
            }
            cout<<l[5][v];
            if(l[6][v]<'O')
            {
                l[6][v]++;
            }
            else if(l[6][v]>'O')
            {
                l[6][v]--;
            }
            else if(l[6][v]=='O')
            {
                temp1++;
            }
            cout<<l[6][v];
            if(l[7][v]<'R')
            {
                l[7][v]++;
            }
            else if(l[7][v]>'R')
            {
                l[7][v]--;
            }
            else if(l[7][v]=='R')
            {
                temp1++;
            }
            cout<<l[7][v];
            if(l[8][v]<'L')
            {
                l[8][v]++;
            }
            else if(l[8][v]>'L')
            {
                l[8][v]--;
            }
            else if(l[8][v]=='L')
            {
                temp1++;
            }
            cout<<l[8][v];
            if(l[9][v]<'D')
            {
                l[9][v]++;
            }
            else if(l[9][v]>'D')
            {
                l[9][v]--;
            }
            else if(l[9][v]=='D')
            {
                temp1++;
            }
            cout<<l[9][v]<<endl;
            if(v!=4)
                v++;
            else
            {
            v=0;
            temp2 = 0;
            cout<<"----------------------------"<<endl;
            }
            if(temp1==10)
            {
                temp2++;
            }
            temp1=0;
            if(temp2==5)
                return 0;
        }
    }
    return 0;
}
