#include<bits/stdc++.h>
using namespace std;
bool isint(int n){
int res=n/1;
if(n<=0 || n>=0 && res*1==n)
{return true;}
return true;
}

int main(){
    int total_days=0,rainy_days=0;
    cout<<"Please enter the daily rainfall data and -1 to quit \n";
    vector<int> v;
    while(true){
        total_days++;
        int x;cin>>x;
        if(x==-1){break;}
        else if(x<-1){continue;}
        else if(isint(x)){cout<<"BAD DATA\n";break;}
        else{v.push_back(x);rainy_days++;}
    }
    int sum=0,maxi=INT_MIN;
            for(auto x:v){sum+=x;maxi=max(maxi,x);}
    while(true){
        cout<<"1. Average daily rainfall\n";
        cout<<"2. Average rainfall on rainy day\n";
        cout<<"3. Count of days that had rain\n";
        cout<<"4. Maximum rainfall\n";
        cout<<"5. Top 5 days of the rain";
        cout<<"Quit\n";
        int x;cin>>x;
        
        if(x==1){
            
            cout<<"The average daily rainfall is: "<<sum/total_days<<endl;
        }
        else if(x==2){
            cout<<"The average rainfall on rainy day is"<<sum/rainy_days<<endl;
        
        }
        else if(x==3){
            cout<<"Count of days that had rain"<<rainy_days<<endl;
        }
        else if(x==4){
            cout<<"The max rainfall is:"<<maxi<<endl;
        }
        else if(x==5){
            vector<int> temp=v;
            sort(temp.begin(),temp.end());
            cout<<"The top 5 days are: ";
            for(int i=0;i<5;i++){cout<<temp[i]<<" ";}
            cout<<endl;}
        }
        else if(x==6){return 0;}
    }
}