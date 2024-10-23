#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;

bool Check(string s){
   for (int i = 0; i < s.size(); i++) {


    if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a'
            || s[i] > 'z')
    {

        s.erase(i, 1);
        i--;
    }

}

char s1[s.size()];

int j=0;

for (int i = s.size()-1; i >= 0 ; i--)
{

    s1[j]=s[i];
    j++;

}

cout<<s<<"\n";
cout<<s1;

for(auto x:s);
cout<<endl;

cout<<s<<"\n";
cout<<s1;

if (s1==s){
    return true;
}
else{
    return false;

}
}
int main()
{

string a = "A man, a plan, a canal: Panama";

cout<<Check(a);


    return 0;

}


