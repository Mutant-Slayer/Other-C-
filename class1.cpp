#include <iostream>
#include <string>

using namespace std;

class macho{
	public:
		void setname(string x)
		{
			name=x;
		}
		
		string getname(){
			return name;
		}
		
	private:
		string name;
};

int main()
{
	macho bo;
	bo.setname("michael starc");
	cout <<bo.getname();
	return 0;
}
