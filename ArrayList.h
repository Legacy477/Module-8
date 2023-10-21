#pragma once
using namespace std;
#include <iostream>
class ArrayList
{
public: struct StudentInfo {
    
        int id;

        string name;

        string phone;

        string address;

    }; 

     
private:

    StudentInfo* student_list_;      //Pointer to the array

    short num_entries_ = 0;              //number of inserted students

    short current_pos_;              //index of the current position

    short capacity_;                 //Array size, i.e., maximum number of



   
public:
    ArrayList(short);

    short GetCap();

    //Returns the maximum array size (capacity_)
   

    short GetNumOfItems();

    //Returns the number of inserted students in the array (num_entries_)

    StudentInfo GetStudentInfo();

    //Gets a student's info from the user

    void AddStudentInfo(StudentInfo temp_Student, unsigned short position);

    //Inserts a student's info into the array at certain position

    void UpdateStudentInfo(StudentInfo temp_Student, unsigned short position);

    //Updates a student's info at certain position

    void DisplayStudentInfo(unsigned short position);
    
    //Displays info of a student at certain position.

    StudentInfo RetrieveStudentInfo(unsigned short position);

    //Returns a student's info from certain position

    void PushStudentInfo(unsigned short position);

    //Moves down (one position) all students start from a certain position

    void PopStudentInfo(unsigned short position);

    //Moves up (one position) all students start from a certain position
};

