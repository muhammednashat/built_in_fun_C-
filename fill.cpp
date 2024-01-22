#include <iostream>
#include <array>
#include <vector>

using namespace std;


string fillstring(string str , int width, string with){

string result = str;

    for (int i = str.size(); i < width; i++)
    {
        result+= with;
    }
 return result;
 
} 

int main(int argc, char const *argv[])
{
        cout<< fillstring("",10,"0");
        cout<<"\n";
        cout<< fillstring("0",10,"0");
        cout<<"\n";
        cout<< fillstring("01",10,"0");
        cout<<"\n";
        cout<< fillstring("012",10,"0");
        cout<<"\n";
        cout<< fillstring("0123",10,"0");
        cout<<"\n";
        cout<< fillstring("01234",10,"0");
        cout<<"\n";
        cout<< fillstring("012345",10,"0");
        cout<<"\n";
        cout<< fillstring("0123456",10,"0");
        cout<<"\n";
        cout<< fillstring("01234567",10,"0");
        cout<<"\n";
        cout<< fillstring("012345678",10,"0");
        cout<<"\n";
        cout<< fillstring("0123456789",10,"0");
        cout<<"\n\n";

    return 0;
}
