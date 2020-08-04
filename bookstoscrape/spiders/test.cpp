#include<iostream>
using namespace std;
class student  {
        public:
        int roll_no;
        int marks ;
       string name;
        
       
	
	//Constructure 
	Laptop (int roll_no , int marks, string name ,)
	{
		this -> roll_no = roll_no;
        this -> marks= marks;
        this -> name = name ;
	}
    void Input(){
        cout<<"Enter the Roll number"<<endl;
        cin>>roll_no;
        cout<<"Enter the marks"<<endl;
        cin>>marks;
        cout<<"Enter the Name"<<endl;
        cin>>name;
        }
    void show (){
        cout<<"The roll number is ="<<roll_no<<endl;
        cout<<"The Marks are ="<<marks <<endl;
        cout<<"The Name is ="<<name <<endl;
        }	
    
};
int main ()
{	
	//Values for Object 1
	string a = "Dell";
	string b = "New";
	string c= "Yellow";
	int d = 10934;
	int e = 9;
	float f= 200.0;
	float g=2.8;
	float h=18.6;
	cout<<"The First Object"<<endl;
	Laptop L1(a, b, c, d, e, f, g, h);		// calling Constructor Laptop and Object L1 
	//Values for Object 2
	string i = "Lenova";
	string j = "Old";
	string k= "Black";
	int l = 20456;
	int m = 4;
	float n= 100.0;
	float o=2.4;
	float p=14.6;
	cout<<"The Second Object"<<endl; // calling Constructor Laptop and Object L2 
	Laptop L2(i, j, k, l, m, n, o, p);
	
	//Values for object 3
	
	string ab = "Power";
	string ac = "Super";
	string ad= "Green";
	int ae = 3046;
	int af = 16;
	float ag= 400.0;
	float ah=3.8;
	float ai=18.6;
	cout<<"The Third Object"<<endl; // calling Constructor Laptop and Object L3 
	Laptop L3(ab, ac, ad, ae, af, ag, ah, ai);
}	
