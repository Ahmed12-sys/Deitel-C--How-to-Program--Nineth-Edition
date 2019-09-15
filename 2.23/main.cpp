#include <iostream>
inline int Max(int x,int y){return (x>y)?x:y;}
inline int Min(int x,int y){return (x<y)?x:y;}
int main (){
int a,b,c,d,e;
a=b=c=d=e=0;
std::cin>>a>>b>>c>>d>>e;
std::cout<<"The maximum Number is "<<Max(a,Max(b,Max(c,Max(d,e))))<<std::endl;
std::cout<<"The Minimum Number is "<<Min(a,Min(b,Min(c,Min(d,e))))<<std::endl;


return 0;
}
