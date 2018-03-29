#include <iostream>

using namespace std;

int main()
{
    int y=1;
    while(y==1){
    int x;
    cout<<"Enter the Number in Arabic : ";
    cin>>x;
    if(x>999){
            for(int i=x/1000 ;i>0 ;i--)
                cout<<"M";
            x=x%1000;
    }
    if(x==999){
            cout<<"IM";
            x=x-995;
    }
    if(x==990){
            cout<<"XM";
            x=x-990;
    }
    if(x==950){
            cout<<"LM";
            x=x-950;
    }
    if(x==900){
            cout<<"CM";
            x=x-900;
    }
    if(x>499){
            for(int i=x/500 ; i>0; i-- )
            cout<<"D";
            x=x%500;
    }
    if(x==499){
            cout<<"ID";
            x=x-499;
    }
    if(x==495){
            cout<<"VD";
            x=x-990;
    }
    if(x==490){
            cout<<"XD";
            x=x-490;
    }
    if(x==450){
            cout<<"LD";
            x=x-450;
    }
    if(x==400){
            cout<<"CD";
            x=x-400;
    }
    if(x>99){
        for(int i=x/100 ; i>0; i--)
            cout<<"C";
        x=x%100;
    }
    if(x==99){
            cout<<"IC";
            x=x-99;
    }
    if(x==95){
            cout<<"VC";
            x=x-95;
    }
    if(x==90){
            cout<<"XC";
            x=x-90;
    }
    if(x>49){
            for(int i=x/50; i>0 ;i--)
                cout<<"L";
            x=x%50;
    }
    if(x==49){
            cout<<"IL";
            x=x-49;
    }
    if(x==45){
            cout<<"VL";
            x=x-45;
    }
    if(x==40){
            cout<<"XL";
            x=x-40;
    }
    if(x>9){
        for (int i=x/10; i>0; i--)
            cout<<"X";
            x=x%10;
    }
    if(x==9){
            cout<<"IX";
            x=x-9;
    }
    if(x>4){
            for(int i=x/5 ; i>0 ; i--)
            cout<<"V";
            x=x%5;
    }
    if(x==4){
            cout<<"IV";
            x=x-4;
    }
    for(x; x>0 ; x--)
        cout<<"I";
    cout<<endl;
    cout<<"Enter 1 to continue or any number to Exit : ";
    cin>>y;
    }
    return 0;
}
