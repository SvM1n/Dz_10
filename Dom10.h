#ifndef DOM8_H
#define DOM8_H
#include <iostream>
#include <string>
using namespace std;
class Human {
protected:
	std::string surname;
	string name;
	string midname;
	int age;
public:
	Human();
	Human(string surname, string name, string middlename, int age);
	virtual void print() =0;
	virtual ~Human() {};
};

class Student : public Human {
private:
	bool on_lesson;
public:
	Student();
	Student(string s1, string n1, string m1, int a1, bool on_lesson);
	void print();
	~Student();
};

class Boss : public Human {
private:
	int num_of_w;
public:
	Boss();
	Boss(string s2, string n2, string m2, int a2, int num_of_w);
	void print();
	~Boss();
};
#endif
