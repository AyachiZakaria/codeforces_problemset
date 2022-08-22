#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n,res=0,s=0;
    int m[1000][3];
        cin >> n;
    if (n>=1 && n<=1000){
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin >> m[i][j];
            s+=m[i][j];
        }
        if (s>1)
        res++;
        s=0;
    }
    }
cout << res;
}