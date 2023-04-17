#include "hheader.h"
#include<bits/stdc++.h>
using namespace std;

book::book(string name,string aauthor)
{
    bookname = name;
    author = aauthor;
}

void book::getdetails()
{
   cout<<"The author is "<<author<<"and the book name is "<<bookname<<endl;
}


int main(){
	book b("mind-mapping","john");
	b.getdetails();

}