#include<iostream>
#include<limits>
// #include<cstring>
// #include<conio.h>
// #include<windows.h>
#include <unistd.h>
using namespace std;
struct emp{
    string name,id,address;
    long long int contact,salary;
};
emp e[100];
int total=0; // total students entered 
void empdata(){
    int choice;
    cout << "How many employees data do you want to enter?" << endl;
    cin >> choice;
    for(int i=total;i<total+choice;i++){ //store the data of each..
        cout << "Enter data of the Employee " << i+1 << endl;
        cout << "Employee Name: " << endl;
        cin.ignore(); // to clear the input buffer
        getline(cin, e[i].name);
        // cin >> e[i].name;
        cout << "ID: " << endl;
        // cin >> e[i].id;
        cin.ignore(); // to clear the input buffer
        getline(cin, e[i].id);
        cout << "Address: " << endl;
        cin.ignore(); // to clear the input buffer
        getline(cin, e[i].address);
        // cin >> e[i].address;
        cout << "Contact: " << endl;
        cin >> e[i].contact;
        do {
        cout << "Contact: ";
        cin >> e[i].contact;
        if (cin.fail() || to_string(e[i].contact).length() != 10) {
        cout << "Invalid input. Please enter a 10-digit phone number.\n";
        cin.clear(); // clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
    }
} while (cin.fail() || to_string(e[i].contact).length() != 10);

        // cin.ignore(); // to clear the input buffer
        // getline(cin, e[i].contact);
        cout << "Salary: " << endl;
        // cin.ignore(); // to clear the input buffer
        // getline(cin, e[i].salary);
        cin >> e[i].salary;
       // Inside the loop for inputting salaries:
// Inside the loop for inputting salaries:
while (true) {
    cout << "Salary: ";
    if (cin >> e[i].salary) {
        if (cin.peek() == '\n') {
            // Input is valid and followed by a newline character
            break; // Break out of the loop
        } else {
            cout << "Invalid input. Please enter a valid salary.\n";
            cin.clear(); // clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
        }
    } else {
        cout << "Invalid input. Please enter a valid salary.\n";
        cin.clear(); // clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
    }
}
   }
    total=total+choice;
}
void show(){
    if(total!=0){
        for(int i=0;i<total;i++){
            cout << "Data of Employee " << i+1 << endl;
            cout << "Employee Name: " << e[i].name << endl;
            cout << "ID: " << e[i].id << endl;
            cout << "Address: " << e[i].address << endl;
            cout << "Salary: " << e[i].salary << endl;
            cout << "Contact: " << e[i].contact << endl;
        }
    }
    else{
        cout << "Your record is empty" << endl;
    }
}
void search(){
    if(total!=0){
        string id;
        cout << "Enter id of the data which you want to search" << endl;
        cin >> id;
        for(int i=0;i<total;i++){
            if(id==e[i].id){
            cout << "Data of Employee " << i+1 << endl;
            cout << "Employee Name: " << e[i].name << endl;
            cout << "ID: " << e[i].id << endl;
            cout << "Address: " << e[i].address << endl;
            cout << "Salary: " << e[i].salary << endl;
            cout << "Contact: " << e[i].contact << endl;
            break;
            }
            if(i==total-1){ // no such id found which you typed
                cout << "No such record found" << endl;
            }
        }
        }
    else{
        cout << "Your record is empty" << endl;
    }
}
void update(){
    if(total!=0){
       string id;
       cout << "Enter the id of the person who's data you need to update" << endl;
       cin >> id;
       //display the old set info of the person :
        for(int i=0;i<total;i++){
            if(id==e[i].id){
            cout << "Previous Data " << endl;
            cout << "Data of Employee " << i+1 << endl;
            cout << "Employee Name: " << e[i].name << endl;
            cout << "ID: " << e[i].id << endl;
            cout << "Address: " << e[i].address << endl;
            cout << "Salary: " << e[i].salary << endl;
            cout << "Contact: " << e[i].contact << endl;
            cout << "Enter the new data" << endl;
            cout << "Employee Name: ";
            cin >> e[i].name;
            cout << "ID: ";
            cin >> e[i].id;
            cout << "Address: ";
            cin >>e[i].address;
            cout << "Contact: ";
            cin >> e[i].contact;
            cout << "Salary: ";
            cin >> e[i].salary;
            break;
            }
            if(i==total-1){ // no such id found which you typed
                cout << "No such record found" << endl;
            }
        }
    }
    else{
        cout << "Your record is empty" << endl;
    }
}
void del() {
    if (total != 0) {
        char user;
        cout << "Press 1 to delete full record" << endl;
        cout << "Press 2 to delete specific record" << endl;
        cin >> user;
        if (user == '1') {
            total = 0; // empty the array and all records deleted.
            cout << "All records deleted" << endl;
        } else if (user == '2') {
            string id;
            cout << "Enter the id of the person who's data you need to delete" << endl;
            cin >> id;
            int i;
            bool idFound = false;
            for (i = 0; i < total; i++) {
                if (id == e[i].id) {
                    // Move all records after the found record up by one position
                    for (int j = i; j < total - 1; j++) {
                        e[j].name = e[j + 1].name;
                        e[j].id = e[j + 1].id;
                        e[j].address = e[j + 1].address;
                        e[j].contact = e[j + 1].contact;
                        e[j].salary = e[j + 1].salary;
                    }
                    total--;
                    cout << "Your required record has been deleted" << endl;
                    idFound = true;
                    break;
                }
            }
            if (!idFound) {
                // Wrong ID entered
                cout << "No such record found" << endl;
            }
        }
    } else {
        cout << "Your record is empty" << endl;
    }
}

int main(){
    start:
    cout << "\n\n\t\tEmployee Management System" << endl;
    cout << "\n\n\t\tSign Up" << endl;
    string username,password;
    cout << "\n\t\tEnter Username: ";
    cin >> username;
    cout << "\n\t\tEnter password: " ;
    cin >> password;
    cout << "\n\t\tYour id is creating please wait" << endl;
    for (int i=0;i<8;i++){
        cout << ".";
        usleep(100000);
    }
    cout << "\n\t\tYour id Created successfully.";
    system("CLS");
    cout << "\n\n\t\tEmployee Management System" << endl;
    cout << "\n\n\t\tLogin" << endl;
    string username1,password1;
    cout << "\t\tUsername: ";
    cin >> username1;
    cout << "\t\tPassword: ";
    cin >> password1;
    cout << endl;
    if(username1==username && password1==password){
        system("CLS");
        char user;
         //goes to the new screen and continues the loop till the point user itself stops it.
        while(1){
            cout << "Please enter 1 to enter the data" << endl;
            cout << "Please enter 2 to show data" << endl;
            cout << "Please enter 3 to search the data" << endl;
            cout << "Please enter 4 to update the data" << endl;
            cout << "Please enter 5 to delete the data" << endl;
            cout << "Please enter 6 to logout" << endl;
            // cout << "Please enter 7 to exit" << endl;
            cin >> user;
            switch(user){
                case '1':
                    empdata();
                    break;
                case '2':
                    show();
                    break;
                case '3':
                    search();
                    break;
                case '4':
                    update();
                    break;
                case '5':
                    del();
                    break;
                case '6':
                    goto start;
                    break;
                default:
                    cout << "\aInvalid Input" << endl;
                    break;
            }
            
    }
    }
    else if(username1!=username){
        cout << "Your username is incorrect" << endl;
        usleep(100000);
        goto start;
    }
    else if(password1!=password){
        cout << "Your password is incorrect" << endl;
        usleep(100000);
        goto start;
    }
    return 0;
}