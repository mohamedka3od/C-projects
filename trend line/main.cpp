#include <iostream>
using namespace std;
float b_ans(int n,float st,float sy,float sty,float st2){
   float b=((n*sty)-(st*sy))/((n*st2)-((st)*st));
    return b;
}
float a_ans(int n,float st,float sy,float sty,float st2){
    float a=(sy-(b_ans(n,st,sy,sty,st2)*st))/n;
    return a;
}
void y_ans(int n,float st,float sy,float sty,float st2,int x){
    float z=a_ans(n,st,sy,sty,st2)+b_ans(n,st,sy,sty,st2)*x;
cout<<"y= "<<z<<endl;
}
int main()
{int r=1;
while(r==1){

    int s,x;
    cout<<"if you have (a&b) enter 0 ,if you have sum of (t&y&ty&t*2) enter 1 ,else enter 2:\n";
    cin>>s;
    switch (s){
    case 0 :{
            float a,b,y;
        cout<<"enter the year you want to forcast :\n";
        cin>>x;
        cout<<"enter a : \n";
        cin>>a;
        cout<<"enter b : \n";
        cin>>b;
        y=a+b*x;
        cout<<"y ="<<y<<endl;
        break;
        }
    case 1 :{
        float t,y,ty,t2,a,b,n,z;

        cout<<"enter the year's number\n";
        cin>>n;
        cout<<"enter the year you want to forcast :\n";
        cin>>x;
        cout<<"enter sum t: \n";
        cin>>t;
        cout<<"enter sum y: \n";
        cin>>y;
        cout<<"enter sum ty: \n";
        cin>>ty;
        cout<<"enter sum t^2: \n";
        cin>>t2;
        b=((n*ty)-(t*y))/((n*t2)-((t)*t));
        a=(y-(b*t))/n;
        z=a+b*x;
        cout<<"a ="<<a<<endl;
        cout<<"b ="<<b<<endl;
        cout<<"y ="<<z<<endl;
        break;
        }
    case 2 :{
        int n;

    cout<<"enter the years number \n";
    cin>>n;//3dd 2l snen
    cout<<"enter the year you want to forcast \n";
    cin>>x;// 2lsna 2le 3awz ttwk3ha
    cout<<"t"<<"    y\n";
float t[n],y[n];
float st=0,sy=0,sty=0,st2=0;
    for (int i=0;i<n;i++){
cin>>t[i];//2lsnen
st=st+t[i];//mgmo3 t
cin>>y[i];//2ltwk3at 2lsabka
sy=sy+y[i];//mgmo3 y
sty=sty+t[i]*y[i];//mgmo3 t*y
st2=st2+t[i]*t[i];//mgmo3 t trpe3

    }
    cout<<"t"<<"       |y"<<"       |ty"<<"       |t^2"<<endl;
    for (int i=0;i<n;i++){
        cout<<t[i]<<"       |"<<y[i]<<"       |"<<t[i]*y[i]<<"       |"<<t[i]*t[i]<<endl;//2lgdwl
    }
    cout<<"sum:"<<endl<<st<<"      |"<<sy<<"      |"<<sty<<"      |"<<st2<<endl;//mgmo3 2l23mda
cout<<"a ="<<a_ans(n,st,sy,sty,st2)<<endl;
cout<<"b ="<<b_ans(n,st,sy,sty,st2)<<endl;
y_ans(n,st,sy,sty,st2,x);
    break;
    }

    }
cout<<"if you have another question enter 1 if you don't enter any number: \n";
cin>>r;
}


    return 0;
}
