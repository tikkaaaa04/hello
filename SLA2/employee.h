class Employee{
private:
       int empno;
       char empname[30];
       double da;
       double hra;
       double bsalary;
public:
	Employee();
	Employee(int eno, char *ename, double d, double h, double s);
	void accept();
	void display();
 	double salary();
		
};
