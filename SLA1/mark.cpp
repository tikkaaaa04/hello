#include<iostream>
#include<string>
using namespace std;

class Student{
	private:
		string name;
		int m1,m2,m3;

	public:
		Student(){
			name="\0";
			m1=0;
			m2=0;
			m3=0;
		}

		Student(string n,int ma1,int ma2,int ma3){
			name=n;
			m1=ma1;
			m2=ma2;
			m3=ma3;
		}

		void getdata(){
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter marks in 3 Subjects:";
			cin>>m1>>m2>>m3;
		}

		 void result(){
			if(m1>=50 && m2>=50 && m3>=50){
				cout<<name<< "   result Pass"<<endl;
			}
			else{
			cout<<name<<"   result Fail!!"<<endl;
			}
		}	
};

int main(){
	Student *sarr[100];
	int n;
	cout<<"enter the number of students:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		sarr[i]=new Student();
		sarr[i]->getdata();
	}
	for(int i=0;i<n;i++){
		sarr[i]->result();
	}
	return 0;
}

