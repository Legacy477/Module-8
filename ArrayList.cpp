#include "ArrayList.h"
#include <iostream>
using namespace std;

ArrayList::ArrayList(short asize) {
    student_list_ = new StudentInfo[asize + 1];
    capacity_ = asize;


    StudentInfo* Temp = new StudentInfo[asize];
    student_list_ = Temp;
}

short ArrayList::GetCap()
{
   
    
    
    return capacity_ ;
}

short ArrayList::GetNumOfItems()
{
    
    return num_entries_;
   
}

ArrayList::StudentInfo ArrayList::GetStudentInfo()
{
    int id;
    string Name;
    string Phone;
    string Address;

    cout << "Please enter a students id " << endl;
    cin >> id;

    cout << "Please enter a students name" << endl;
    cin >> Name;

    cout << "Please enter a students Phone number" << endl;
    cin >> Phone;

    cout << "Please enter a students Address" << endl;
    cin >> Address;
    StudentInfo* TempInfo = new StudentInfo;
    TempInfo->address = Address;
    TempInfo->id = id;
    TempInfo->name = Name;
    TempInfo->phone = Phone;

    return(*TempInfo);
    }

void ArrayList::AddStudentInfo(StudentInfo temp_Student, unsigned short position)
{
    ArrayList::PushStudentInfo(position);
    student_list_[position] = temp_Student;

}

void ArrayList::UpdateStudentInfo(StudentInfo temp_Student, unsigned short position)
{
   
    student_list_[position] = temp_Student;
        
}

void ArrayList::DisplayStudentInfo(unsigned short position)
{
    cout << student_list_[position].address<<endl;
    cout << student_list_[position].id<<endl;
    cout << student_list_[position].name<<endl;
    cout << student_list_[position].phone<<endl;

}

ArrayList::StudentInfo ArrayList::RetrieveStudentInfo(unsigned short position)
{
  
    return StudentInfo();
}

void ArrayList::PushStudentInfo(unsigned short position)
{
    if (num_entries_ < capacity_)
    {
        int numStudents = num_entries_;
        while (numStudents >= position)
        {
            student_list_[numStudents + 1] = student_list_[numStudents];
            numStudents--;

        }
    }
    else {
        cout << "you have reached the maximum amount of information" << endl;
    }
}

void ArrayList::PopStudentInfo(unsigned short position)
{
    int currentLocation = 0;
    int numStudents = num_entries_;
    while (currentLocation != position);
    {
        student_list_[currentLocation] = student_list_[currentLocation+1];
        currentLocation = currentLocation + 1;

    };
    num_entries_--;

       
}
