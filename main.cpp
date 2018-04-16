#include <iostream>
#include "student.h"
using namespace std;

int main()
{	
	student X;
	student Y(X);
	X.addcourse("BSCS 413");
	X.addcourse("BSCS 415");
  //cout << "Course: " << Y.getcourselist(0) << endl;
	//X=Y;
	X.display();
	Y.display();
	//cout << X;
	//cout << Y;
  system("pause");
}
