#include <iostream>
#include <array>
#include <vector>

using namespace std;


bool  islowerletters(string str){

    bool result =true;
    for (char c : str){
    if (!(c >= 'a' && c <= 'z'))   result= false;
    else continue;
 }

 return result;
} 


int main(int argc, char const *argv[])
{
 cout<< islowerletters("ahmedCanWalk");
cout<<"\n\n";
    return 0;
}
