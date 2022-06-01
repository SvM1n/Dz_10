#include "Dom10.h"

Human::Human() {
	surname = "";
	name = "";
	midname = "";
	age = 0;
}

Human::Human(string surname, string name, string middlename, int age) {
	this->surname = surname;
	this->name = name;
	this->midname = midname;
	this->age = age;
}


Student::Student(string s1, string n1, string m1, int a1, bool on_lesson):Human( surname,  name,  midname,  age) {
	s1 = surname;
	n1 = name;
	m1 = midname;
	a1 = age;
	this->on_lesson = on_lesson;
}

void Student::print() {
	std::cout << "Введите данные о студенте (фамилия, имя, отчество, возраст,присутствие на паре): " << surname << name << midname << age << on_lesson;
	if (on_lesson) {
		std::cout << "Студен присутствует на паре";
	}
	else {
		std::cout << "Студен отсутствует на паре";
	}
}

Boss::Boss(string s2, string n2, string m2, int a2, int num_of_w) : Human( surname,  name,  midname,  age) {
	s2 = surname;
	n2 = name;
	m2 = midname;
	a2 = age;
	this->num_of_w = num_of_w;
}

void Boss::print() {
	std::cout << "Введите данные о начальнике (фамилия, имя, отчество, возраст, количество рабочих): " << surname << name << midname << age << num_of_w;
	
}