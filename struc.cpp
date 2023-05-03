#include<bits/stdc++.h>
using namespace std;
struct student
{
	string name;
	string subject;
	int marks;
};
int main()
{
	
	vector<student> v;
	student s={"vikram","robotics",77};
	student s1={"rolex","social",87};
	student s2={"santhanam","chemistry",97};
	v.push_back(s);
	v.push_back(s1);
	v.push_back(s2);
	v.push_back({"teena","physics",67});
//	s.name="vikram";
//	s.subject="robotics";
//	s.marks=77;
cout<<v[3].name;
	
	return 0;
}
