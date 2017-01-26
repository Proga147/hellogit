#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
#include<vector>
#include "Cpp.h"

int main( ){

vector<Student> mystudent;
mystudent.resize(4);
int age;

for (int i=0; i<4; i++) {
cout<<"Please enter Student name: ";
string x;
cin>>x;
cout<<"Enter age: ";
cin>>age;
mystudent[i].setname(x);
mystudent[i].setage(age);
cout<<"Hi :  "<<mystudent[i].getname( )<<endl;
}

cout<<"Names in the list are: ";
int j=1;
for(int i=0; i<mystudent.size(); i++){
cout<<j<<")"<<mystudent[i].getname( )<<setw(10)<<"age : "<<mystudent[i].getage( )<<endl;
j++;
}


system("pause");


return 0;
}



