#include<bits/stdc++.h>
using namespace std;
int main(){
string s = "Gaurav";
 
int len = s.size();
s[len-1]= 'g';
cout << s << "\n";
s[len-2]= 'g';
cout << s;



    return 0;
}