#include <iostream>
#include "ArrayList.h"
using namespace std;

int main() {
	int userInput = 0;
	int userDecision = 0;
	ArrayList studentList(20);
	ArrayList::StudentInfo tempStudent;
	while (userInput != -1) {

		cout << "Welcome to the class list editor what would you like to do" << endl;

		cout << "1. Get capacity" << endl;
		cout << "2.Returns the number of inserted students in the array" << endl;
		cout << "3.Gets a student's info from the user" << endl;
		cout << "4.Inserts a student's info into the array at certain position" << endl;
		cout << "5.Updates a student's info at certain position" << endl;
		cout << "6.Displays info of a student at certain position." << endl;
		cout << "7.Returns a student's info from certain position" << endl;
		cout << "8. Moves down (one position) all students start from a certain position" << endl;
		cout << "9.Moves up (one position) all students start from a certain position" << endl;
		cout << "If your done press -1" << endl;
		cin >> userInput;

		switch (userInput)
		{
		default:
			cout << "Not a valid number please re-enter a number" << endl;
		case 1:
			cout << "your maximum capacity is" << studentList.GetCap();
		case 2:
			cout << "The number of students you have in the array is " << studentList.GetNumOfItems();
		case 3:
			studentList.GetStudentInfo();
			tempStudent = studentList.GetStudentInfo();
		case 4:

			cout << "where do you want this student to be" << endl;
			cin >> userDecision;
			studentList.AddStudentInfo(tempStudent, userDecision);
		case 5:
			cout << "what position do you want updated" << endl;
			cin >> userDecision;
			tempStudent = studentList.GetStudentInfo();
			studentList.UpdateStudentInfo(tempStudent, userDecision);

		case 6:
			cout << "what position would you like to view" << endl;
			cin >> userDecision;
			studentList.DisplayStudentInfo(userDecision);
		case 7:
			cout << "what position would you like to retrieve" << endl;
			cin >> userDecision;
			studentList.RetrieveStudentInfo(userDecision);
		case 8:
			cout << "What postion would you like moved" << endl;
			cin >> userDecision;
			studentList.PushStudentInfo(userDecision);
		case 9:
			cout << "what postion would you like moved" << endl;
			cin >> userDecision;
			studentList.PopStudentInfo(userDecision);

			break;
		}



	}
}