#include<bits/stdc++.h>
using namespace std;
/* take the day no and print corresponding day
for 1 print monday, 
for 2 print tuesday and so on
*/

int main(){
int dayno;
cin >> dayno;
switch(dayno){
case 1:
cout << "monday";
break;
case 2:
cout << "tuesday";
break;
case 3:
cout << "wednesday";
break;
case 4:
cout << "thursday";
break; 
case 5:
cout << "friday";
break;
case 6:
cout << "saturday";
break;
case 7:
cout << "sunday";
break;
}


    return 0;
}