#include<iostream>
using namespace std;
class student
{
    private:
        // Class attributes to store the values of the object in it
	    string first_name,last_name,standing;
	    float gpa;
        int credits_taken;
    public:
        // Constructor for initializing the object
        student(string first_name,string last_name,float gpa,int credits_taken)
        {
            /* This refers the object of the class for which he function is called 
               Here in this code this is referred as s because the object is called for s
            */
            this->first_name=first_name;
            this->last_name=last_name;
            this->gpa=gpa;
            this->credits_taken=credits_taken;

            // Here we are initializing the standing attribute as per the credits_taken value as per the question
            if(credits_taken>120)
            {
                this->standing="Senior";
            }
            else if(credits_taken>80)
            {
                this->standing="Junior";
            }
            else if(credits_taken>50)
            {
                this->standing="Sophomore";
            }
            else if(credits_taken>0)
            {
                this->standing="Freshman";
            }
        }
        // Function to display the output
        void output()
        {
            cout<<endl<<endl;
            cout<<"Student First name - "<<first_name<<endl;
            cout<<"Student Last name - "<<last_name<<endl;
            cout<<"Student GPA - "<<gpa<<endl;
            cout<<"Student Credits taken - "<<credits_taken<<endl;
            cout<<"Student Standing - "<<standing<<endl;
        }
};
int main()
{
	string first_name,last_name;
	float gpa;
    int credits_taken;
	cout<<"Enter the first name of the student : ";
	cin>>first_name;
    cout<<"Enter the last name of the student : ";
	cin>>last_name;
	cout<<"Enter the GPA of the student : ";
	cin>>gpa;
	cout<<"Enter the credits taken by the student : ";
	cin>>credits_taken;

    // Instantiating the object of class student
    student s(first_name,last_name,gpa,credits_taken);

    // Calling the function output to display the output on the terminal
    s.output();
	return 0;
}
