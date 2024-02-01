#include <iostream>

using namespace std;

class E-Learning{
private:
	Student * studentList;
	Teacher * teacherList;
public:
	E-Learning();
	void enrollStudent(Student newStudent);
	void addTeacher(Teacher newTeacher);
	void assignTeacher(int studentID, int teacherID);
	void login(string email, string password);
};

void enrollStudent(Student newStudent){
	studentList.add(newStudent);
}

void addTeacher(Teacher newTeacher){
	teacherList.add(newTeacher);
}
