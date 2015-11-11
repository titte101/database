#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

string Student::getName() {
	return name;
}

int Student::getID() {
	return ID;
}

double Student::getGPA() {
	return GPA;
}

string Student::getLevel() {
	return level;
}

string Student::getMajor() {
	return major;
}

int Student::getAdvisor() {
	return advisor;
}

void Student::setName(string n) {
	name = n;
}

int Student::setID(int id) {
	ID = id;
}

double Student::setGPA(double gpa) {
	GPA = gpa;
}

string Student::setLevel(string l) {
	level = l;
}

string Student::setMajor(string m) {
	major = m;
}

int Student::setAdvisor(int a) {
	advisor = a;
}

bool Student::operator <(const Student& s) {
	if(ID < s.ID) {
		return true;
	}
	return false;
}

bool Student::operator >(const Student& s) {
	if(ID > s.ID) {
		return true;
	}
	return false;
}

ostream& Student::operator<<(ostream& os, const T& obj) {
	//write obj to stream
	return os;
}
