#include <iostream>
using namespace std;


int getlength(string str){
int index = 0;
    for(char x : str){
        index++;
    }
    return index;
}

int main(int argc, char const *argv[])
{
  cout << getlength("1234");
  cout << "\n\n";
  cout << getlength("");
  cout << "\n\n";

    return 0;
}
