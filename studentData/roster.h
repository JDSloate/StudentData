#include <iostream>
#include <string>
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#pragma once

using namespace std;
//const int numStudents = 5;
class Roster {
public:
	//Roster();
	//Roster(int capacity);
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram);
	void printAll();
	void printByDegreeProgram(int degreeProgram);
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
	void remove(string studentID);
	~Roster();
	Student* classRosterArray[5] = { nullptr, nullptr, nullptr, nullptr, nullptr };
};
