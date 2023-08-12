#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    fstream file;

    cout<<"\t\t\t Student Management sis"<<endl;
	cout<<"\t\t\t------------------------"<<endl;
	string name;
	cout<<"Enter Your Name=";
    cin>>name;
    string School;
	cout<<"Enter your School=";
    cin>>School;
    string Course;
	cout<<"Enter your course=";
	cin>>Course;

    file.open("studentRecord.txt", ios::app | ios::out);
    file << " " << name << " " << School << " " << Course << "\n";
    file.close();




    return 0;
}
