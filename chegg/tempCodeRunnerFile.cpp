#include<iostream>
using namespace std;

int main(){
    double temp;
    cout<<"Enter name and surname\n";
    string name,surname;cin>>name>>surname;
    cout<<"the letter grade you earned:\n";
    cin>>temp;
    int caase=0;
    if(temp>0&&temp<29){caase=1;}
    if(temp>=30&&temp<=39){caase=2;}
    if(temp>=40&&temp<=49){caase=3;}
    if(temp>=50&&temp<=64){casse=4;}
    if(temp>=65&&temp<=79){caase=5;}
    if(temp>=80&&temp<=100){case=6;}
    char res;
    
    
    switch(temp){
        case 1:{
            // cout<<"Your grade is: F\n";
            res='F';
            break;
        }
        case 2:{
            // cout<<"Your grade is: E\n";
            res='E';
            break;
        }
        case 3:{
            // cout<<"Your grade is: D\n";
            res='D';
            break;
        }
        case 4:{
            // cout<<"Your grade is: C\n";
            res='C';
            break;
        }
        case 5:{
            // cout<<"Your grade is: B\n";
            res='B';
            break;
        }
        case 6:{
            // cout<<"Your grade is: A\n";
            res='A';
            break;
        }
        default:
        cout<<"That score is not valid\n";
    }
    return 0;
}
