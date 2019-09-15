#include <iostream>
#include <string>
using namespace std;
class GradeBook{
private:
    string CourseName;
public:
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
GradeBook myGradeBook;
string CourseName;

getline(cin,CourseName);
myGradeBook.setCourseName(CourseName);
myGradeBook.displayMsg();


return 0;
}
