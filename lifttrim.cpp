#include <iostream>
#include <array>
#include <vector>

using namespace std;


string lifttrim(string str , char simbol = ' '){

string result = "";
auto cancontinue = true;

    for (int i = 0; i < str.size(); i++)
    {
        if ( cancontinue && str[i] == simbol)
        {
            continue;
        }
        else
        {
            cancontinue = false ;
           result += str[i];
        }
    }
 return result;
 
} 

int main(int argc, char const *argv[])
{
        cout<< lifttrim("@@@@Ahmed",'@');
        cout<<"\n";
        cout<< lifttrim("@@@@A@h@m@e@d@",'@');
        cout<<"\n";
        cout<< lifttrim("   Ah m e  d",' ');
        cout<<"\n";
        cout<< lifttrim("   Ahmed");
        cout<<"\n";
        cout<<"\n\n";

    return 0;
}
