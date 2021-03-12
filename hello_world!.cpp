#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    char l[11];
    l[10] = '!';
    for(int a = 0; a<10; a++)
    {
        l[a] = rand()%26+65;
        cout<<l[a];
        if(a==4)
            cout<<" ";
    }
    cout<<l[10] << endl;
    int temp = 0;
    while(temp!=10)
    {
        temp = 0;
        if(l[0]!='H')
            l[0] = rand()%26+65;
        else
            temp++;
        cout<<l[0];
        if(l[1]!='E')
            l[1] = rand()%26+65;
        else
            temp++;
        cout<<l[1];
        if(l[2]!='L')
            l[2] = rand()%26+65;
        else
            temp++;
        cout<<l[2];
        if(l[3]!='L')
            l[3] = rand()%26+65;
        else
            temp++;
        cout<<l[3];
        if(l[4]!='O')
            l[4] = rand()%26+65;
        else
            temp++;
        cout<<l[4] << " ";
        if(l[5]!='W')
            l[5] = rand()%26+65;
        else
            temp++;
        cout<<l[5];
        if(l[6]!='O')
            l[6] = rand()%26+65;
        else
            temp++;
        cout<<l[6];
        if(l[7]!='R')
            l[7] = rand()%26+65;
        else
            temp++;
        cout<<l[7];
        if(l[8]!='L')
            l[8] = rand()%26+65;
        else
            temp++;
        cout<<l[8];
        if(l[9]!='D')
            {
            l[9] = rand()%26+65;
            cout<<l[9]<<l[10];
            }
        else
            {
            cout<<l[9]<<l[10];
            temp++;
            }
        cout<<endl;
    }
    return 0;
}
