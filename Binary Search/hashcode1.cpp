#include<bits/stdc++.h>
using namespace std;
class hashh {
    public:
    string name;
    int no_skills;
    unordered_map<string,int> skill;
};
class project {
    public:
    string project_name;
    int deadline;
    int score;
    int bb;
    int no_roles;
    unordered_map<string,int> roles;
};
multimap<string,int> all;
int main(){
    int c,projects_no;cin>>c>>projects_no; //kinte admt the
    hashh contributor[c];
    for(int i=0;i<c;i++){  //jitne admi the utni bar loop
        string name;cin>>name;  //name input
        contributor[i].name=name; 
        int n;cin>>n;
        for(int j=0;j<n;j++){
            string skillname;
            int level;
            cin>>skillname>>level;
           contributor[i].skill[skillname]=level;
           all[skillname]=level;
    }
    project pp[projects_no];
    for(int i=0;i<projects_no;i++){
        string project_name;
        int deadline;
        int score;
        int bb;
        int no_roles;
        cin>>project_name>>deadline>>score>>bb>>no_roles;
        pp[i].project_name=project_name;
        pp[i].deadline=deadline;
        pp[i].score=score;
        pp[i].bb=bb;
        pp[i].no_roles=no_roles;

        for(int j=0;j<no_roles;j++){
            string key;int level;
            cin>>key>>level;
        }
    }





}