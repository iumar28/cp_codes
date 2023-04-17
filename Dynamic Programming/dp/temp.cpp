#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main() {
	// your code goes here
	string s = "ABCFABCXBCDABCX";
	string word = "ABCD";
	size_t found;
	int ans=0;
	int i=0,j=0,m=0;
    cout<<s.length();
    int count=0;
	while(i<s.length())
	{
	    
	         j=0;
	         m=0;
	    	if(s[i]==word[j])
	    	{
	    		while(j<word.length())
	    		{
	    			if(s[i]==word[j])
	    			{
	    				j++;//3
	    				i++;//8
	    				m++;//3
	    			}
	    			 else if(word[j]=='D')
	    			{
	    				if(s[i]=='X')
	    				{
	    					j++;//4
	    				    i++;//4
	    					m++;//4
	    				}
	    			
	    			}
	    			else{
	    				break;
	    			}
	    		}
	    		if(m==word.length())
	    		{
	    			ans++;//1
	    		}
	    	}	   
		cout<<count<<" ";
			i++;
	}
	cout<<ans;
	return 0;
}