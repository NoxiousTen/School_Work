/*
Lukings
Started:
12/11/2018
Finished:

Assignment: lukings_2a

Inputs:

Outputs:

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int Choice_main;
int Choice_membership;
int Choice_search;
int Choice_report;
int Choice_help;
int main_menu();
int Membership();
int Search();
int Report();
int Help();
int list_members();
int Update_member();
ifstream member_file;
string member_input;
main(){
    main_menu();
};
main_menu(){
    cout << "We're Here To PUMP You Up!" << endl;
    cout << "Menu" << endl;
    cout << "====" << endl;
    cout << "Press 1 for Membership Information Menu" << endl;
    cout << "Press 2 for Search Menu" << endl;
    cout << "Press 3 for Reports Menu" << endl;
    cout << "Press 4 for Help Menu" << endl;
    cin >> Choice_main;
    if(Choice_main == 1){
        Membership();
    };
    if(Choice_main == 2){
        Search();
    };
    if(Choice_main == 3){
        Report();
    };
    if(Choice_main == 4){
        Help();
    };

};
list_members(){
    member_file.open("Members.txt");
    string member_input;
    if(member_file.fail()){
        cout << "Error Opening File" << endl;
    }else{
        cout << "Number of Members Total:" << member_input << endl;
        while(!member_file.eof() && !member_file.fail()){
            member_file >> member_input;
            cout << "Number of Member(s) in Contract:" << member_input << endl;
            cout << "Membership Number Number:" << member_input << endl;
            cout << "Member Last Name:" << member_input << endl;
            cout << "Member First Name:" << member_input << endl;
            cout << "Gender:" << member_input << endl;
            cout << "Address:" << member_input << endl;
            cout << "Phone #:" << member_input << endl;
            cout << "Expire Date:" << member_input << endl;
            cout << "Owing:" << member_input << endl;
            cout << "Membership Level:" << member_input << endl;
        };
    };
    member_file.close();
};

Membership(){
    cout << "This is the Membership Information Menu" << endl;
    cout << "Menu" << endl;
    cout << "====" << endl;
    cout << "Press 1 to list all members" << endl;
    cout << "Press 2 to update information for a member" << endl;
    cout << "Press 3 to return to main menu" << endl;
    cin >> Choice_membership;
    if(Choice_membership == 1){
        list_members();
    };
    if(Choice_membership == 2){
        Update_member();
    };
    if(Choice_membership == 3){
        main_menu();
    };
};

Search(){
    cout << "Seach Menu" << endl;
    cout << "Press 1 to search by lastname" << endl;
    cout << "Press 2 to search by phone number" << endl;
    cout << "Press 3 to return to main menu" << endl;
    cin >> Choice_search;
    if(Choice_search == 1){

    };
    if(Choice_search == 2){

    };
    if(Choice_search == 3){
        main_menu();
    };
};

Report(){

};

Help(){

};

Update_member(){

};
