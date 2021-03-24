

#include <iostream>
#include<math.h>
using namespace std;
int i, j, n, u;
int s = 0;

int main()
{   
    do
    {
        cout << "N:";
        cin >> n;
        if (n <= 0)
            cout << "vui long nhap lai  ";
    } while (n <= 0);
           
    cout << "cach de tinh tong: for(1),while(23): ";
    cin >> u;
    switch (u)
  {
    case 1:
    {
        for (i = 0; i <= n; i++)
        {
            int a = pow(i, 2);
            s = s + a;
        }
        cout << "S(n)=" << s;
        break;
    }
    case 2:
    {   i = 0;
        while (i <= n)
        {
            int a = pow(i, 2);
            s = s + a;
            i++;
        }
        cout << "S(n)=" << s;
        break;
    }
    case 3:
    {
        do
        {
            int a = pow(i, 2);
            s = s + a;
            i++;
        } while (i <= n);
        cout << "S(n)=" << s;
        break;
    }
  }
    return(0);
}

