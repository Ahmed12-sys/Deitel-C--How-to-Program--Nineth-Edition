 #include <iostream>
#include <string>
using namespace std;
class GradeBook{
private:
    string CourseName;
public:
    explicit GradeBook(string name):CourseName(name)
    {

    }

    void setCourseName( string name){
    CourseName = name;
    }
    string getCourseName()const{
    return CourseName;
    }
    void displayMsg()const{
    cout<<"The course name is "<<getCourseName()<<endl;
    }


};

int main(){
GradeBook myGradeBook1("Arabic Language");
GradeBook myGradeBook2("English Language");
cout<<"gradebook1 \n"<<myGradeBook1.getCourseName()<<"gradebook2 "<<myGradeBook2.getCourseName()<<endl;


return 0;
}
