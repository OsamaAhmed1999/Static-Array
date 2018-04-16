#include <iostream>
using namespace std;

class student
{
  public:
  student()
  {
    this->name = "Osama";
    this->id = 123;
    this->courselist[0] = "BSCS 411";
  }
  student(string name , int id , string course)
  {
    this->name = name;
    this->id = id;
    for(index = 0; index < 6; index++)
    {
      this->courselist[index] = course;
    }
  }
  student(student& clone)
  {
    this->name = clone.name;
    this->id = clone.id;
    for(index=0; index<6; index++)
    {
      this->courselist[index] = clone.courselist[index];
    }
  }

  void operator = (const student clone)
  {
    this->name = clone.name;
    this->id = clone.id;
    for(index = 0; index < 6; index++)
    {
      this->courselist[index] = clone.courselist[index];
    }
  } 

  string getname()
  {
    return this->name;
  }
  int getid()
  {
    return this->id;
  }
  string getcourselist(int index)
  {
    return this->courselist[index];
  }

  void setname(string name)
  {
    this->name = name;
  }
  void setid(int id)
  {
    this->id = id;
  }
  void setcourselist(string courselist)
  {
    this->courselist[index]=courselist;
  }

  void display()
  {
    cout << "Name: " << this->name << endl;
    cout << "ID: " << this->id << endl;
    for(index = 0; index < 6; index++)
    {
      cout << "Course: " << this->courselist[index] << endl; 
    }
    cout << endl;
  }

  void addcourse(string course)
  {
    this->courselist[index] = course;
    index++;
  }


  private:
  string name;
  int id;
  int index;
  string courselist[6];
};