#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

struct movie
{
	string title;
	int year;
	float rating;
	int year1;
	
};

struct friends
{
	string name;
	string fv_movie;
	string email;
	
	struct movie Add;
};

int main()
{
	int i;

	friends f;

	fstream outfile;
	
	cout<<"Enter friend name"<<endl;
	cin>>f.name;
	
	cout<<"Enter movie"<<endl;
	cin>>f.Add.title;
	
	cout<<"Enter Year"<<endl;
	cin>>f.Add.year1;
		
	cout<<"Enter favourite movie "<<endl;
	cin>>f.fv_movie;
	
	cout<<"Enter IMDB rating"<<endl;
	cin>>f.Add.rating;
	
	cout<<"Enter Year"<<endl;
	cin>>f.Add.year;
	
	cout<<"Enter Email"<<endl;
	cin>>f.email;
	
	outfile.open("ns.txt");
	
	outfile<<f.name<<" watching "<<f.Add.title<<" release in "<<f.Add.year1<<" but he like "<<f.fv_movie<<" release in "<<f.Add.year<<" rating is "<<f.Add.rating<<" & the email is " <<f.email<<endl;     
	
	outfile.close();
	
	return 0;
}
