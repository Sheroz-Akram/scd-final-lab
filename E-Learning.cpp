#include <iostream>

using namespace std;

class E-Learning{
private:
	Student * studentList;
	Teacher * teacherList;
public:
	E-Learning();
	public void enrollStudent(Student newStudent);
	public void addTeacher(Teacher newTeacher);
	public void assignTeacher(int studentID, int teacherID);
	public void login(string email, string password);
};