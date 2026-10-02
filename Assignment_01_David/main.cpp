#include <iostream>

using namespace std;

int main()
{
    //Variable Declaration
    int myLevel, myNumberOfProjects;
    string myName, myDepartment, myPreferedArea;
    myName = "David Toluwanimi";
    myDepartment = "Computer Engineering";
    myLevel = 400;
    myPreferedArea = "CAD Design";
    myNumberOfProjects = 9;
    //Printing of Standard Output
    cout <<"Name: "<<myName<<endl;
    cout<<"Department: "<<myDepartment<<endl;
    cout<<"Level: "<<myLevel<<endl;
    cout<<"Prefered Area: "<<myPreferedArea<<endl;
    cout<<"Projects Completed: "<<myNumberOfProjects<<endl;
    //Printing out of Full output
    cout<< "\n\n\n\nMy name is "<<myName<<" and I am in "<<myDepartment<<".\nI am currently in "<<myLevel<<"L and I prefer "<<myPreferedArea<<" out of all the hardware engineering areas.\nI currently have completed "<<myNumberOfProjects<<" Projects"<< endl;
    return 0;
}
