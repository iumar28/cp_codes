#include<bits/stdc++.h>
using namespace std;


int compareVersion(string a,string b) {
    int i=0,j=0,one=a.size(),two=b.size(),first=0,second=0;
    while(i<one || j<two){
        while(i<one && a[i]!='.'){
            first=first*10+(a[i]-'0');i++;
        }
        while(j<two&&a[i]!='.'){
            second=second*10+(b[j]-'0');j++;
        }
        if(first<second){return -1;}
        if(first>second){return 1;}
        i++,j++,first=0,second=0;
    }
    return 0;
}



int main(){
    int no=compareVersion("1.0","1.1");
    cout<<no;

}