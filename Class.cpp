
#include<iostream>
using namespace std;

class student{
	string passcode;
	public:
		string name;
		int id;
		student(){
		}
		student(string pss, string n,int i){
			name = n;
			id = i;
			passcode= pss;
		}

		void into(){
			cout<<"My name is "<<name<<" , my id is "<<id<<" passcode is "<<passcode;

		}
		void setPass(string s){
			passcode= s;
		}
};


int main(){
	student s1;
	student s2("10","Mohit",1);

	int a = 10;
	int*ptri = &a;
	student*ptrs = &s2;

	if(sizeof(ptri) == sizeof(ptrs)){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	return 0;
}
