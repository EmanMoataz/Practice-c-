#include <iostream>
using namespace std ;

class student {

	// الكلاس بتتكتب قبل الميين بعرفها بالهيكل بتاعها البرايفت اللي مننوع حد يوصله و البابلك العادي

public:
	int age;
	float grade;
	string name;

};

int main () {

	// باجي هنا بقى بعرفالفاريبلز بتاعت الكلاس و اديلهم القيم بتاعتهم اللي هتروح عالكلاس تتخزن فيها

	student ob1, ob2, ob3;
	
	// كل استيودنت هيكون ليه البيانات او الصفات اللي موجوده في الكلاس 

	ob1.age = 19;
	ob1.name = " Eman";
	ob1.grade = 4.0;

	ob2.age = 27;
	ob2.name = "Amr";
	ob2.grade = 3.5;

	ob3.age = 20;
	ob3.name = "yousef";
	ob3.grade = 3.0;

	cout << "the student 1 : " << endl << "name is :" << ob1.name 
		<< endl << "age is :" << ob1.age << endl
		<< "grade is :" << ob1.grade << endl << endl;


	cout << "the student 2 : " << endl << "name is :" 
		<< ob2.name << endl << "age is :" << ob2.age << endl
		<< "grade is :" << ob2.grade << endl << endl;


	cout << "the student 3 : " << endl << "name is :"
		<< ob3.name << endl << "age is :" << ob3.age << endl
		<< "grade is :" << ob3.grade << endl << endl;

	return 0;

}