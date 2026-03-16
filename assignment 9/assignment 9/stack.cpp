#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool check(string s){
	stack<char> s1;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(' || s[i]=='{' || s[i]=='['){
			s1.push(s[i]);
		}
		else if(s[i]==')' || s[i]=='}' || s[i]==']'){
			if(s1.empty()){
				return false;
			}
			char top=s1.top();
			if((s[i]==')' && top!='(')|| (s[i]=='}' && top!='{')|| (s[i]==']' && top!='[')){  
					return false;
				}
				s1.pop();
			}
		}
		return s1.empty();
	}

int main(){
	string s;
	cin>>s;
	cout<<(check(s)?"Balanced":"Unbalanced")<<endl;
	return 0;
}
