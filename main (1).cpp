#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std ;

class Library{
  public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int fine ;
    int pages;
};

int main(){
    Library lib[20];
    int input=0;
    int count =0;

    while(input!=3){
        cout<<"Enter 1 to input data about book (id,name,author,student,price,fine,pages) "<<endl;
        cout<<"Enter 2 to dispay data"<<endl;
        cout<<"Enter 3 to end"<<endl;
        cin>>input;

        switch(input){
            case 1:
                start:
                cout<<"Enter book id"<<endl;
                cin>>lib[count].id;
                cout<<"Enter book name"<<endl;
                cin.getline(lib[count].name,100,'$');
                cout<<"Enter book author name"<<endl;
                cin.getline(lib[count].author,100,'$');
                cout<<"Enter student name"<<endl;
                cin.getline(lib[count].student,100,'$');
                cout<<"Enter book price"<<endl;
                cin>>lib[count].price;
                cout<<"Enter extra fine"<<endl;
                cin>>lib[count].fine;
                cout<<"Enter number of pages"<<endl;
                cin>>lib[count].pages;
                count++;
                break;
            
            case 2:
                for(int i = 0; i<count; i++){
                    cout<<"Book Id :"<<lib[i].id<<endl;
                    cout<<"Book Name :"<<lib[i].name<<endl;
                    cout<<"Book Author :"<<lib[i].author<<endl;
                    cout<<"Book Student :"<<lib[i].student<<endl;
                    cout<<"Book Price :"<<lib[i].price<<endl;
                    cout<<"Book Fine :"<<lib[i].fine<<endl;
                    cout<<"Book Pages :"<<lib[i].pages<<endl;
                }
                break;

            case 3:
                exit(0);
                break;

            default:
                cout<<"Entered wrong value , please try again" <<endl;
                goto start;
        }  
    }
}