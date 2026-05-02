#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

string getPass(int length){
    string chars = "qazwsxedcrfvtgbyhnujmikolpPLOKIMJUNHYBGTVFRCDEXSWZAQ0681327954";
    string strong = "";
    int n = chars.size();
    while(length--){
        strong = strong + chars[rand()%n];
    }
    return strong;
}

int main(){
    srand(time(0));
    while(1){
        int length = (rand()%5)+8;  //Random password length will be in range of 8-12 characters
        string pass = getPass(length);
        cout<<"The random password is: "<<pass<<endl;
        int op;
        cout<<"Would you like to generate more?"<<endl;
        cout<<"Press 1 to continue or 2 to exit."<<endl;
        z:
        cin>>op;
        if(op==2) return 0;
        else if(op == 1) continue;
        else{
            cout<<"Invalid input. Press either 1 to continue or 2 to exit.";
            goto z;
        } 
    }
}
