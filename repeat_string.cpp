#include <iostream>
using namespace std;



bool isempty(string str);
void repeatstring(string str, int counter= 1, bool hasspace= false , bool separateline= false);



int main(int argc, char const *argv[])
{
    repeatstring("do", 3,true,true);

        cout<<"\n\n";

    return 0;
}


/*
 Accept three param
 str =  string to repeat     [Mandatory]
 counter = int  how many times need to repeat [Optional]   Default = 
 hasspace =  Space between string [Optional]    Default = false
 separateline =  bool is needing new line  [Optional]    Default =  false
         
*/

void repeatstring(string str, int counter, bool hasspace , bool separateline){

 string separator =  hasspace ? " ": "";
 string line = separateline ? "\n": "";

 if (isempty(str))
 {
   cout<< "Your text is null";
 }
 else
 {
 for (int i = 0; i < counter; i++)
    {
        cout<<str+separator+line;
    }
 }
    
}


/*



*/

bool isempty(string str){

return false;
}