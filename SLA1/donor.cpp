
#include<iostream>
#include<string>
using namespace std;
class Donor{
	private:
		int number;
		string name;
		int age;
		string address;
		char gender;
		string blood;
	public:
		void accept(){
			cout<<"Enter donor number:";
			cin>>number;
			cout<<"Enter donor name:";
			cin>>name;
			cout<<"Enter donor age:";
                        cin>>age;
			cout<<"Enter donor address:";
                        cin>>address;
			cout<<"Enter donor gender:";
                        cin>>gender;
			gender = toupper(gender);
			cout<<"Enter donor blood group:";
                        cin>>blood;
		}
		void display(){
			cout<<"Number :"<<number;
			cout<<"Name :"<<name;
		       	cout<<"Age :"<<age;
		   	cout<<"Address :"<<address;
	                cout<<"Gender :"<<gender;
		       	cout<<"Blood group :"<<blood;
		}

		string getaddress(){
			return address;
		}
		int getnumber(){
			return number;
		}
		string getname(){
			return name;
		}
		string getblood(){
			return blood;
		}

		int getage(){
			return age;
		}
		char getgender(){
			return gender;
		}

		void searchbyblood(Donor** arr,int size){
			for(int i=0;i<size;i++){
				if(arr[i]->getblood()=="o+"){
					arr[i]->result();
				}
			
			}
		}

                void searchbyage(Donor** arr,int size){
                        for(int i=0;i<size;i++){
                                if(18<=arr[i]->getage() && arr[i]->getage()<=25){
                                        arr[i]->result();
                                }
                                
                        }
                }
                void searchbyblood2(Donor** arr,int size){
                        for(int i=0;i<size;i++){
                                if(arr[i]->getgender()=='F' && arr[i]->getage()>=21 && arr[i]->getage()<=24 && (arr[i]->getblood()=="a+" || arr[i]->getblood()=="a-")){
                                        arr[i]->result();
                                }
                               
                        }
                }

		void result(){
			cout<<number<<","<<name<<","<<address<<endl;
		}

};

int main(){

	int choice,count=0;
	Donor *darr[100];
	do{
		cout<<"1.Add data \n2. blood donors having blood group o+ \n 3. blood donors in the age group between 18-25 \n 4. female donors having blood group A in the age between 21 and 24 \n 5. exit\n";
		cout<<"Enter choice";
		cin>>choice;
		switch(choice){
			case 1:
				darr[count]=new Donor();
				darr[count]->accept();
				count++;
				break;

			case 2:
				
				darr[0]->searchbyblood(darr,count);
				break;
                        case 3:
				
                                darr[0]->searchbyage(darr,count);
				break;
                        case 4:
				
                                darr[0]->searchbyblood2(darr,count);
				break;

			case 5:
				cout<<"Thank you"<<endl;
				break;
		}
	}while(choice!=5);

	for (int i = 0; i < count; i++) delete darr[i];

	return 0;
}

		