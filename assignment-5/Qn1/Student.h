class Student{
   private:
       int rollNo;
       char *name;
       char *course;

   public:
       Student();
       Student(int r,const char* nm, const char* cs);
       Student(Student &s);

       void setRollNo(int r);
       void setName(const char* nm);
       void setCourse(const char* cs);

       int getRollNo();
       char* getName();
       char* getCourse();

       void display();

       ~Student();

};
