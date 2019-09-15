#include <iostream>
using namespace std;
class GradeBook{

public:
     void displaymsg()const{

     cout <<"welcome to Grade book class "<<endl;
     }

};

int main (){

GradeBook myGradebook;

myGradebook.displaymsg();

return 0;
}
