#include <bits/stdc++.h>
using namespace std;
int Division(int a,int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return Division(b,a%b);
    }
}
int Division_while(int c,int d)
{
    while(d!=0)
    {
        int r = d;
        d = c%d;
        c = r;
    }
    return c;
}

int main()
{
    int ac ,bc;
    scanf("%d %d",&ac,&bc);
    if(ac >bc)
    {
         cout<<"Division:\n"<<Division(ac,bc)<<endl;
         cout<<"Division_while\n"<<Division_while(ac,bc)<<endl;
    }
    else
    {
        cout<<"Division:\n"<<Division(bc,ac)<<endl;
        cout<<"Division_while\n"<<Division_while(bc,ac)<<endl;
    }
    return 0;


}
