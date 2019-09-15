#include <iostream>
#include <string>

using namespace std;

class GradeBook{

public:
    void displaymsg(string CourseName){

cout<<"The course is "<<CourseName<<endl;
};

};
int main ( )   {
GradeBook myGradeBook;
string CourseName;
getline(cin,CourseName);
myGradeBook.displaymsg(CourseName);
return 0;

}
