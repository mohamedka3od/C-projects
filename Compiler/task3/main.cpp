#include <iostream>
#include <string>

using namespace std;

string lexer(string word){

int index = 0 , state = 0;

while(index < word.length()){
    char c = toupper(word[index]);
    switch(state){
    case 0 :
        if(c >='1' && c<='9') state = 1;
        else if(c=='0') state = 2;
        else if (c=='B') state = 6;
        else return "Unknown";
        break;
    case 1 :
        if(c >='0' && c<='9') state = 1;
        else return "Unknown";
        break;

    case 2 :
        if(c=='X') state= 3;
        else if(c >='1' && c<='7') state = 5;
        else return "Unknown";
        break;
    case 3 :
        if((c >='0' && c<='9')|| (c >='A' && c<='F') ) state = 4;
        else return "Unknown";
        break;
    case 4 :
        if((c >='0' && c<='9')|| (c >='A' && c<='F') ) state = 4;
        else return "Unknown";
        break;
    case 5 :
        if(c >='0' && c<='7') state = 5;
        else return "Unknown";
        break;
    case 6 :
        if(c=='0'||c=='1') state = 7;
        else return "Unknown";
        break;
    case 7 :
        if(c=='0'||c=='1') state = 7;
        else return "Unknown";
        break;
    }
    index++;
}
switch (state){
case 1 :
    return "Decimal";
case 4 :
    return "Hexadecimal";
case 5 :
    return "Octal";
case 7 :
    return "Binary";
}
return "Unknown";
}


int main()
{

while (true){
string num ;
cout<<"Enter the number : ";
cin>>num;
cout<<(lexer(num))<<endl;
}
}
