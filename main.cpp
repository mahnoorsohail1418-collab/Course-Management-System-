#include<iostream>
#include<string>
using namespace std;

struct courses{
	int course_ID;
	string course_title;
	int credit_hrs;
	bool filled=false;
};
courses c[5];
void addAStudent(){
	for(int i=0;i<5;i++){
		if(!c[i].filled){
			cout<<"enter course ID : "<<endl;
			cin>>c[i].course_ID;
			cout<<"enter course title : "<<endl;
			cin.ignore();
			getline(cin,c[i].course_title);
			cout<<"enter course credit hours : "<<endl;
			cin>>c[i].credit_hrs;
			c[i].filled=true;
			cout<<"COURSE ADDED SUCCESSFULLY "<<endl;
			
			
		}
	}
	cout<<"list is full "<<endl;
} 
void updateAStudent(){
	int id;
	cout<<"enter course ID to update : "<<endl;
	cin>>id;
	for(int i=0;i<5;i++){
	if(c[i].filled&&c[i].course_ID==id){
		cout<<"enter new course title : "<<endl;
		cin.ignore();
		getline(cin,c[i].course_title);
		cout<<"enter new course credit hours : "<<endl;
		cin>>c[i].credit_hrs;
		cout<<"COURSE UPDATED SUCCESSFULLY "<<endl;
	}	}
	
}
void deleteAStudent (){
		int id;
	cout<<"enter course ID to delete : "<<endl;
	cin>>id;
	for(int i=0;i<5;i++){
	if(c[i].filled&&c[i].course_ID==id){
		c[i].filled=false;
		cout<<"COURSE DELETED SUCCESSFULLY"<<endl;
}}

	
}
void searchAndDisplayAStudent (){
		int id;
	cout<<"enter course ID to display : "<<endl;
	cin>>id;
	for(int i=0;i<5;i++){
	if(c[i].filled&&c[i].course_ID==id){
		cout<<"COURSE ID: "<<c[i].course_ID<<endl;
		cout<<"COURSE TITLE: "<<c[i].course_title<<endl;
		cout<<"COURSE CREDIT HOURS: "<<c[i].credit_hrs<<endl;
}}

	
}
void displayAllstudent(){
		for(int i=0;i<5;i++){
			if(c[i].filled){
		cout<<"COURSE ID: "<<c[i].course_ID<<endl;
		cout<<"COURSE TITLE: "<<c[i].course_title<<endl;
		cout<<"COURSE CREDIT HOURS: "<<c[i].credit_hrs<<endl;
}}

	
}

	

int main(){
	char choice;
	do{
cout<< "--------------- Main Menu --------------- "<<endl;
cout<<"Press 1 to add a Course" <<endl;
cout<<"Press 2 to update a Course "<<endl;
cout<<"Press 3 to delete a Course "<<endl;
cout<<"Press 4 to search and display a Course "<<endl;
cout<<"Press 5 to display all Courses "<<endl;
cout<<"Press e to exit the program"<<endl;
 cin>>choice;
 switch(choice){
 	case '1': addAStudent();break;
 	case '2': updateAStudent();break;
 	case '3': deleteAStudent();break;
 	case '4':searchAndDisplayAStudent ();break;
 	case '5':displayAllstudent();break;
 	case 'e':cout<<"Existing program---"<<endl;break;
 	default:
 		cout<<"Invalid choice,Try again--"<<endl;
 }
 }while(choice!='e');
}