#include <iostream>
using namespace std;
void pattern1(int n)
{
    char symbol;
    cout << "Enter the symbol you want to print:" << endl;
    cin >> symbol;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << symbol;
        }
        cout << "\n";
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++) // space
        {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1; k++) // star
        {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++) // space
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++) // space
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    cout << " ";
    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k < i; k++) // space
        {
            cout << " ";
        }
        for (int k = 1; k <= n * 2 - (1 + 2 * i); k++) // star
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern9(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++) // space
        {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1; k++) // star
        {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++) // space
        {
            cout << " ";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << " ";
        for (int k = 1; k < i; k++) // space
        {
            cout << " ";
        }
        for (int k = 1; k <= n * 2 - (1 + 2 * i); k++) // star
        {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++) // space
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    int mid;
    if (n % 2 == 0)
    {
        mid = n / 2;
    }
    else
    {
        mid = (n + 1) / 2;
    }
    for (int i = 1; i <= mid; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = mid - 1; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j <= i; j++)
                if (j % 2 == 0)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
        }
        else
        {
            for (int j = 0; j <= i; j++)

                if (j % 2 == 0)
                {
                    cout << "0";
                }
                else
                {
                    cout << "1";
                }
        }

        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // number
        {
            cout << j;
        }
        for (int k = 1; k <= (2 * n - 2 * i); k++) // space
        {
            cout << " ";
        }
        for (int l = i; l >= 1; l--) // space
        {
            cout << l;
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (char ch = 'A'; ch <= 'A' + (i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}

void pattern17(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i - 1; space++) // space
        {
            cout << " ";
        }

        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i - 1; j++) // character
        {
            cout << ch;
            if (j < breakpoint)
                ch++;
            else
            {
                ch--;
            }
        }
        for (int space = 1; space <= n - i - 1; space++) // space
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'F' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern19(int n)
{
    int iniS = 0;
    for (int i = 0; i < n; i++)
    {

        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        iniS = iniS + 2;
        cout << endl;
    }
    iniS = 8;
     for (int i = 0; i <= n; i++)
    {

        // stars
        for (int j = 1; j <=  i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <=  i; j++)
        {
            cout << "*";
        }
        iniS = iniS - 2;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern14(n);
}
