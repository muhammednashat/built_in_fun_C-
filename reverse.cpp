#include <iostream>
using namespace std;


string reversestring(string str){
    string reversed = "";
    int lastindex = str.size() - 1; 
    for(int i = lastindex ; i >= 0 ; i-- )
     reversed += str[i];
    return reversed;
}

int main(int argc, char const *argv[])
{
  cout << reversestring("1234");
  cout << "\n\n";
  cout << reversestring("123456789");
  cout << "\n\n";

    return 0;
}
