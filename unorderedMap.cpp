/*********************************************************
*               Author: Mohammad Seeam                   *
*        To compile and run - use below command          *
*    clear && g++ -o myexe unorderedMap.cpp && ./myexe   *
*********************************************************/

#include <iostream>
#include <unordered_map>
#include <vector>

#pragma clang diagnostic ignored "-Wc++11-extensions"

using namespace std;

void insertData(unordered_map<string, vector<string> >& myReceivedMap){
    cout<<endl;
    cout << "Inside insertData() function....." << endl;
    string name = "";
    cout << "Enter new name: ";
    cin >> name;
    string courseName = "";
    cout << "Enter your course name: ";
    cin >> courseName;
    if(myReceivedMap.find(name) != myReceivedMap.end()) {
        cout << "Inserting values!" << endl;
        myReceivedMap.at(name).push_back(courseName);
    }else{
        cout << "Inserting new key and values!" << endl;
        vector<string> valueVector;
        valueVector.push_back(courseName);
        myReceivedMap[name] = valueVector;
    }cout << endl;
}

void printData(unordered_map<string, vector<string> >& myReceivedMap){
    cout<<endl;
    cout<<"Inside printData() function....."<<endl;
    for (const auto& entry : myReceivedMap) {
        cout << "NAME  : " << entry.first<<" and COURSES :";
        for(int i=0;i<entry.second.size();i++){
            cout<<" -> "<< entry.second.at(i);
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    unordered_map<string, vector<string> > myMap;
    bool proceed = true;
    while(proceed){
        cout<<"Press A to insert new name : "<<endl;
        cout<<"Press B to print all names : "<<endl;
        cout<<"Press Q to end the program : ";
        char options;
        cin>>options;
        switch(options){
            case 'a':
            case 'A':
                insertData(myMap);
                break;
            case 'b':
            case 'B':
                printData(myMap);
                break;
            case 'q':
            case 'Q':
                proceed=false;
                break;
            default :
                cout<<endl;
                cout<<"Please enter correct option"<<endl;
                cout<<endl;
                break;
        }
    }
    cout<<"The program ends ....."<<endl;
    return 0;
}

/*
Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : g

Please enter correct option

Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : a

Inside insertData() function.....
Enter new name: SEEAM
Enter your course name: ENGR1330
Inserting new key and values!

Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : b

Inside printData() function.....
NAME  : SEEAM and COURSES : -> ENGR1330

Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : a

Inside insertData() function.....
Enter new name: SEEAM
Enter your course name: CS1412
Inserting values!

Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : b

Inside printData() function.....
NAME  : SEEAM and COURSES : -> ENGR1330 -> CS1412

Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : a

Inside insertData() function.....
Enter new name: SAGOR
Enter your course name: ECON1101
Inserting new key and values!

Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : b

Inside printData() function.....
NAME  : SAGOR and COURSES : -> ECON1101
NAME  : SEEAM and COURSES : -> ENGR1330 -> CS1412

Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : a 

Inside insertData() function.....
Enter new name: SEEAM
Enter your course name: CS2365
Inserting values!

Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : b

Inside printData() function.....
NAME  : SAGOR and COURSES : -> ECON1101
NAME  : SEEAM and COURSES : -> ENGR1330 -> CS1412 -> CS2365

Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : a

Inside insertData() function.....
Enter new name: JACOB
Enter your course name: HIST2101        
Inserting new key and values!

Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : b

Inside printData() function.....
NAME  : JACOB and COURSES : -> HIST2101
NAME  : SAGOR and COURSES : -> ECON1101
NAME  : SEEAM and COURSES : -> ENGR1330 -> CS1412 -> CS2365

Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : a

Inside insertData() function.....
Enter new name: SEEAM
Enter your course name: CS4293
Inserting values!

Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : b

Inside printData() function.....
NAME  : JACOB and COURSES : -> HIST2101
NAME  : SAGOR and COURSES : -> ECON1101
NAME  : SEEAM and COURSES : -> ENGR1330 -> CS1412 -> CS2365 -> CS4293

Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : b

Inside printData() function.....
NAME  : JACOB and COURSES : -> HIST2101
NAME  : SAGOR and COURSES : -> ECON1101
NAME  : SEEAM and COURSES : -> ENGR1330 -> CS1412 -> CS2365 -> CS4293

Press A to insert new name : 
Press B to print all names : 
Press Q to end the program : q
The program ends .....
*/