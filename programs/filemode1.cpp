#include<iostream> //to write and read the content in file
#include<fstream> 
using namespace std;
int main()
{ int rno,fee;
char name[50];
cout<<"Enter the Roll Number:";
cin>>rno;
cout<<"\nEnter the Name:";
cin>>name;
cout<<"\nEnter the Fee:";
cin>>fee;
ofstream.fout("d:/student.doc"); //output file object
fout<<rno<<"\t"<<name<<"\t"<<fee; //write data to the file student
fout.close();
ifstream.fin("d:/student.doc"); //input object
fin>>rno>>name>>fee; //read data from the file student
fin.close();
cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
return 0;}
