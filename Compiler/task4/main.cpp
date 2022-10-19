#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

string parser(string word){

int index = 0 , state = 0;

while(index < word.length()){
    char c = toupper(word[index]);
    switch(state){
    case 0 :
        if(c >='1' && c<='9') state = 1;
        else if(c=='0') state = 2;
        else if (c=='B') state= 6;
        else if (c >='A' && c<='Z' && c!='B') state = 8;
        else return word+" : Unknown";
        break;
    case 1 :
        if(c >='0' && c<='9') state = 1;
        else return word+" : Unknown";
        break;

    case 2 :
        if(c=='X') state= 3;
        else if(c >='1' && c<='7') state = 5;
        else return word+" : Unknown";
        break;
    case 3 :
        if((c >='0' && c<='9')|| (c >='A' && c<='F') ) state = 4;
        else return word+" : Unknown";
        break;
    case 4 :
        if((c >='0' && c<='9')|| (c >='A' && c<='F') ) state = 4;
        else return word+" : Unknown";
        break;
    case 5 :
        if(c >='0' && c<='7') state = 5;
        else return word+" : Unknown";
        break;
    case 6 :
        if(c=='0'||c=='1') state = 7;
        else if((c>='A' && c<='Z')||(c>='2' && c<='9')) state =8;
        else return word+" : Unknown";
        break;
    case 7 :
        if(c=='0'||c=='1') state = 7;
        else if((c>='A' && c<='Z')||(c>='2' && c<='9')) state =8;
        else return word+" : Unknown";
        break;
    case 8 :
        if((c>='A' && c<='Z')||(c>='0' && c<='9')) state = 8;
        else return word+" : Unknown";
        break;
    }
    index++;
}
switch (state){
case 1 :
    return  word +" : Decimal";
case 4 :
    return word +" : Hexadecimal";
case 5 :
    return word +" : Octal";
case 7 :
    return word +" : Binary";
case 8 :
    return word +" : ID";
}

return word+" : Unknown";
}

void lexer (string msg){
string word = "";
int index = 0;
    while (index < msg.length())
    {
        if (msg[index] == ' ')
        {
            if(word != ""){
               cout<<parser(word)<<endl;
            }
            word = "";
        }
        else {
            word = word + msg[index];
        }
        index++;
    }

    cout << parser(word) << endl;

}


int main()
{
   string msg;
   cout<<"Enter msg : ";
    getline(cin, msg);
   lexer(msg);


}
