#include<string>
using namespace std;

class Student{

	int rollNo=1;
	string name;
	const int marks=80;

	public:

	void setMarks();
	void display() const;
	void getRoll() const;
	void accept();

};
