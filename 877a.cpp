#include <bits/stdc++.h>
using namespace std;

string name[] = {"Danil", "Olya", "Slava", "Ann" ,"Nikita"};
int xcount;
void check(string s){
    for(auto x : name)if(s==x)xcount++;
}
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        string temp = "";
        for(int j=i; j<s.size(); j++){
            temp+=s[j];
            check(temp);
        }
    }
    if(xcount==1) puts("YES");
    else puts("NO");
    return 0;
}
