#include <iostream>
#include <string>

using namespace std;

bool lexer(string word){

int index = 0 , state = 0;

while(index < word.length()){
    char c = word[index];
    switch(state){
    case 0 :
        if(c >='1' && c<='9') state = 1;
        else return false;
        break;
    case 1 :
         if(c >='0' && c<='9') state = 1;
         else return false;
         break;
    }
    index++;
}
if (state == 1) return true;
else return false;
}

int main()
{
string word;

   cout<<"Enter word : ";
   cin>>word;

   if(lexer(word)) cout<<"true";
   else cout<<"false";

}
