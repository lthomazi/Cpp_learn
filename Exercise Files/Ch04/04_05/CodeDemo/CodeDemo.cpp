// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

using namespace std;
// student: id, name
vector<Student> students = {Student(1,"George P. Burdell"),
				Student(2,"Nancy Rhodes")};

// course: course id, name, credits
vector<Course> courses = {Course(1,"Algebra",5),
			Course(2,"Physics",4),
			Course(3,"English",3),
			Course(4,"Economics",4)};

// grade: student id, course id, grade
vector<Grade> grades = {Grade(1,1,'B'),	Grade(1,2,'A'),	Grade(1,3,'C'),
			Grade(2,1,'A'),	Grade(2,2,'A'), Grade(2,4,'B')};

/* George: 
	points: 3 + 4 + 2 = 9
	credits: 5 + 4 + 3 = 12
*/

// gpa = total points/total credits
float GPA = 0.0f;
int id;
float points = 0.0f;
int c_id, credits = 0;

int main(){
	cout << "Enter a student ID: ";
	cin >> id;

	// Calculate the GPA for the selected student.
	// loop through grades
	for(int i = 0; i < grades.size(); i++) {
		// find matching student id
		if (id == grades[i].get_student_id()) {
			c_id = grades[i].get_course_id(); // course id interested in
			// add points
			switch (grades[i].get_grade()){
				case 'A': 
					points += (4.0f) * courses[c_id - 1].get_credits();
					break;
				case 'B': 
					points += (3.0f) * courses[c_id - 1].get_credits();;
					break;
				case 'C':
					points += (2.0f) * courses[c_id - 1].get_credits();;
					break;
				case 'D':
					points += (1.0f) * courses[c_id - 1].get_credits();;
					break;
			}

			// add credits
			credits += courses[c_id - 1].get_credits();
		}
	}

	string student_str;
	student_str = students[id - 1].get_name();
	
	GPA = points/credits;
	
	cout << "The GPA for " << student_str << " is " << GPA << endl;
	return (0);
}




