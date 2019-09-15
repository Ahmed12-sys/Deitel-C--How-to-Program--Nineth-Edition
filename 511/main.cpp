#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*(calculating total sales)
*/
int main(int argc, char** argv)
{
	int productnumber ;
	int quantity;
	int sum=0;
	for (int i =0; i!=999; i++)
		{

			cin >>productnumber>>quantity;

			switch (productnumber)
				{


					case 1:
						sum += quantity *2.98;
						break;

					case 2:
						sum += quantity *4.50;
						break;
					case 3:
						sum += quantity *9.98;
						break;

					case 4:
						sum += quantity *4.49;
						break;

					case 5:
						sum += quantity *6.87;
						break;

					default:
						cout<<"undefined product"<<endl;
						cout <<"total retail value"<<sum<<endl;

						i=999;
						break;


				}
		}

	return 0;
}
