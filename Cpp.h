class Student {

public:
Student( ) {
age=0;
}

void setname(string x ){
name=x;
}
string getname( ) {
return name;
}

void setage( int a) {
age=a;
}
int getage( ) {
	return age;}

private:
string name;
int age;
};
