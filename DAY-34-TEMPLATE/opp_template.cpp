#include <iostream>

using namespace std;

	template <typename T1, typename T2>

   class cal
   {
		public:
		cal(T1 x , T2 y){
			cout << x+y << endl;
		}
   };


int main()
{
	
	cal<double, double> obj1(7.554, 4.5697);
	cal<double, double> obj2(8.3365, 78.54897);
	
	return 0;
}