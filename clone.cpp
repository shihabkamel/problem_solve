#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int mx = 0;
        if( a != b && b != c && a != c)
        {

            mx = max(a, b);
            mx = max(mx, c);
            if(mx - a != 0)
            {
                cout << mx - a + 1 << " ";
            }
            else
            {
                cout << mx - a << " ";
            }
            if(mx - b != 0)
            {
                cout << mx - b + 1 << " ";
            }
            else
            {
                cout << mx - b << " ";
            }
            if(mx - c != 0)
            {
                cout << mx - c + 1 << endl;
            }
            else
            {
                cout << mx - c << endl;
            }
        }
        else if( a == b && a == c && b == c)
        {
            cout <<  1 << " " << 1 << " " <<  1 << endl;
        }
        else
        {
            mx = max(a, b);
            mx = max(mx, c);

            if( (mx == a && mx == b) || (mx == c && mx == a) || (mx == c && mx == b))
            {
                if(mx - a != 0)
                {
                    cout << mx - a + 1 << " ";
                }
                else
                {
                    cout << 1 << " ";
                }
                if(mx - b != 0)
                {
                    cout << mx - b + 1 << " ";
                }
                else
                {
                    cout << 1 << " ";
                }
                if(mx - c != 0)
                {
                    cout << mx - c + 1 << endl;
                }
                else
                {
                    cout << 1 << endl;
                }
            }
            else if()
            {
                if(mx - a != 0)
                {
                    cout << mx - a + 1 << " ";
                }
                else
                {
                    cout << mx - a << " ";
                }
                if(mx - b != 0)
                {
                    cout << mx - b + 1 << " ";
                }
                else
                {
                    cout << mx - b << " ";
                }
                if(mx - c != 0)
                {
                    cout << mx - c + 1 << endl;
                }
                else
                {
                    cout << mx - c << endl;
                }

            }
        }
    }
}
