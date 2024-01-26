#include <iostream>
#include <array>
#include <vector>

using namespace std;

int getlength(string str)
{
    int index = 0;
    for (char x : str)
    {
        index++;
    }
    return index;
}

bool empty(string str)
{

    if (getlength(str))
        return true;
    else
        return false;
}

int main(int argc, char const *argv[])
{

    cout << getlength("");
    cout << "\n";
    cout << getlength("AP))0");

    cout << "\n\n";
    return 0;
}
