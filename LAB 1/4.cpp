#include <iostream>

using namespace std;

struct Student {
	char Name[3][20];
	int roll[3], marks[3];
	int setStudentData(int i){
		cout << "Enter the Name: ";
		cin >> Name[i] ;
		cout << "Enter the ROLL NO.: ";
		cin  >> roll[i];
		cout << "Enter the marks: ";
		cin >> marks[i];
	}
	
	int getStudentData(int i){
		cout << "\n\nName: " << Name[i] << "\tMarks: " << marks[i] << "\tRoll No.: " << roll[i] ;
	}
};

int main(){
	Student S1;
	int i;
	for(i=0 ; i<3 ; i++){
		S1.setStudentData(i);
	}
	for(i=0 ; i<3 ; i++){
		S1.getStudentData(i);
	}
	
}
