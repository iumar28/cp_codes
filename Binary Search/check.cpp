#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    istringstream iss(s);
    string word;
    while(iss >> word) {
        for(int i=0;i<word.size();i++){
            cout<<word[i]<<"-";
        }
        cout<<"    ";
        /* do stuff with word */
    }

}