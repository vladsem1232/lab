#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

int main() {
	int thisyear = 2025;

	employee e1;
	e1.setsurname("Oleh");
	e1.setdepartment("Accountant");
	e1.setyear(2000);
	e1.setsalary(5000);
	e1.calculatebonus(thisyear);

	employee e2("Ivan", "Bank", 2015, 10000);
	e2.calculatebonus(thisyear);

	cout << "Employee1: " << e1.getsurname() << ", Department: " << e1.getdepartment() << ", Experience: "
		<< e1.getexperience(thisyear) << ", Salary: " << e1.getsalary() << ", Bonus: " << e1.getbonus();
	cout << endl;
	cout << "Employee2: " << e2.getsurname() << ", Department: " << e2.getdepartment() << ", Experience: "
		<< e2.getexperience(thisyear) << ", Salary: " << e2.getsalary() << ", Bonus: " << e2.getbonus();
	
	int size;
	cout << endl << "Enter how many employees you want to add";
	cin >> size;
	
	employee* emp = new employee[size];
	
	for (int i = 0;i < size;i++) {
		string sur, dep;
		int year;
		float salary;
		cout << "Employee number " << i + 1 << endl;
		cout << "Enter surname:";
		cin >> sur;
		emp[i].setsurname(sur);
		cout << "Enter department:";
		cin >> dep;
		emp[i].setdepartment(dep);
		cout << "Enter year:";
		cin >> year;
		emp[i].setyear(year);
		cout << "Enter salary:";
		cin >> salary;
		emp[i].setsalary(salary);
		emp[i].calculatebonus(thisyear);
	}
	cout << endl << "List of employees:"<<endl;
	for (int i = 0;i < size;i++) {
		cout << emp[i].getsurname() << ", Department: " << emp[i].getdepartment() << ", Salary: " << emp[i].getsalary()
			<< ", Experience: " << emp[i].getexperience(thisyear) << ", Bonus: " << emp[i].getbonus() << endl;
	}

	float averagexperience = calculatexperience(emp, size, thisyear);
	cout << "Average experience: " << averagexperience << endl;

	sortemploys(emp, size, thisyear);
		cout << "Sorted by experience";
		for (int i = 0;i < size;i++) {
			cout << emp[i].getsurname() << ", Department: " << emp[i].getdepartment() << ", Salary: " << emp[i].getsalary()
				<< ", Experience: " << emp[i].getexperience(thisyear) << ", Bonus: " << emp[i].getbonus() << endl;
		}
		delete[] emp;
	
	return 0;
}
