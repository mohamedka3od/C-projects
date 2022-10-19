#include <iostream>
#include <string>

using namespace std;
bool notShort(string s) {
return (s.length() >=8);
}
bool speciaChar(char c){
return((tolower(c)<'a'||tolower(c)>'z') && (c<'0'||c>'9'));
}
bool isDigit(char c){
return((c>='0'&&c<='9'));
}
bool isCapital(char c){
    return(c>='A'&&c<='Z');
}
bool isSmall(char c){
    return(c>='a'&&c<='z');
}

bool isValidate(string pass){
    bool s1=false,s2=false;
    bool s3=false,s4=false;
    bool s5=false;
    s1=notShort(pass);
    for(int i=0;i<pass.length();i++){
        if(!s2){
            s2=speciaChar(pass[i]);
        }
        if(!s3){
            s3=isDigit(pass[i]);
        }
        if(!s4){
            s4=isCapital(pass[i]);
        }
        if(!s5){
            s5=isSmall(pass[i]);
        }
        if(s1&&s2&&s3&&s4&&s5)return true;
    }

    return(s1&&s2&&s3&&s4&&s5);

}

int main()
{
    string pass;
    while(true){
        cout<<"Enter pass : ";
    getline(cin,pass);
    isValidate(pass)?cout<<"validate":cout<<"notValidate";
    }


}
