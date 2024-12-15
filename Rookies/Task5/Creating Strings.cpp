#include <bits/stdc++.h>
using namespace std;
set<string>res;
void gen(string cur,string rem){
 if (rem.empty()) {
res.insert(cur);
return;
 }
 for(int i = 0;i<rem.size();i++) {
gen(cur + rem[i], rem.substr(0, i) + rem.substr(i + 1));
}
}
int main() {
string s;
cin >> s;
sort(s.begin(), s.end());
gen("", s);
cout<<res.size()<< "\n";
for(const string&x:res)
{
cout<<x<<"\n";
}
    return 0;
}

