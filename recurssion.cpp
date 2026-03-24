#include <bits/stdc++.h>

using namespace std;
void rev(int n)
{
    if (n < 1)
        return;
    else
    {
        cout << n << endl;
        rev(n - 1);
    }
}
void pname(int n, string name)
{
    if (n < 1)
        return;
    else
    {
        cout << name << endl;
        pname(n - 1, name);
    }
}
void backtrack(int i, int n)
{
    if (i < 1)
        return;
    else
    {
        backtrack(i - 1, n);
        cout << i << endl;
    }
}
int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

int palindorme(string str, int i, int len)
{
    if (i >= len / 2)
        return true;
    if (str[i] != str[len - i - 1])
        return false;
    return (str, i + 1, len);
}
int main()
{
    string str;
    getline(cin, str);
    int len = str.length();
    string str2;
    

}