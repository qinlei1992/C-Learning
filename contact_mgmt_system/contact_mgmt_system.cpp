#include <iostream>
#include <string>
#include <vector>
#define num 1000
using namespace std;

void print_menu(){
    cout << "*************************" << endl;
    cout << "** 1. add contacts ******" << endl;
    cout << "** 2. display contacts **" << endl;
    cout << "** 3. delete a contact **" << endl;
    cout << "** 4. find a contact ****" << endl;
    cout << "** 5. modify a contact **" << endl;
    cout << "** 6. delete all contacts" << endl;
    cout << "** 0. quit **************" << endl;
    cout << "*************************" << endl;
}


struct contact {
    string name;
    int phone;
    string address;
};

void add_contact(vector<struct contact> *contact_list){
    struct contact new_contact;
    cout << "name:" << endl;
    cin >> new_contact.name;
    cout << "phone:" << endl;
    cin >> new_contact.phone;
    cout << "address:" << endl;
    cin >> new_contact.address;
    contact_list->push_back(new_contact);
}

void display_contacts(vector<struct contact> *contact_list){
    for (int i=0;i<contact_list->size();i++){
        cout << "name:" << contact_list->at(i).name << 
        "\t\tphone number:" << contact_list->at(i).phone << 
        "\t\taddress:" << contact_list->at(i).address << endl;
    }
}

int isExist(vector<struct contact> *contact_list){
    string name;
    cout << "please key in a name" << endl;
    cin >> name;
    for (int i=0;i<contact_list->size();i++){
        if (name == contact_list->at(i).name){
            return i;
            break;
        } 
    }
    return -1;
}

void delect_contact(vector<struct contact> *contact_list){
    int index = isExist(contact_list);
        if (index != -1){
            contact_list->erase(contact_list->begin()+index);
            cout << "successfully deleted a contact" << endl;
        } else{
            cout << "this name is not found!" << endl;
        }
}

void find_contact(vector<struct contact> *contact_list){
    int index = isExist(contact_list);
        if (index != -1){
            cout << "name:" << contact_list->at(index).name << 
            "\t\tphone number:" << contact_list->at(index).phone << 
            "\t\taddress:" << contact_list->at(index).address << endl;
        } else{
            cout << "this name is not found!" << endl;
        }
}


void modify_contact(vector<struct contact> *contact_list){
    int index = isExist(contact_list);
        if (index != -1){
            cout << "name:" << endl;
            cin >> contact_list->at(index).name;
            cout << "phone:" << endl;
            cin >> contact_list->at(index).phone;
            cout << "address:" << endl;
            cin >> contact_list->at(index).address;
        } else{
            cout << "this name is not found!" << endl;
        }
}


void delete_all_contacts(vector<struct contact> *contact_list){
    char decision;
    cout << "warning! this will clear the entire contact list!" << endl;
    cout << "press Y if you want to continue" << endl;
    cin >> decision;
    if (decision == 'Y'){
        contact_list->clear();
    }
}


int main(int argc, char const *argv[])
{   
    //struct contact contacts[1000];

    vector<struct contact> contacts;

    int selection;

    while (true){
        // cout << endl;
        print_menu();
        cout << "please choose an option:" << endl;
        cin >> selection;
        cin.clear();
        cin.ignore();

        // int len = sizeof(contacts)/sizeof(struct contact);
        //cout << len << endl;
        switch (selection){
            case 1:
                if (contacts.size()>num){
                    return 0;
                } else{
                    add_contact(&contacts);
                    break;
                }
            case 2:
                display_contacts(&contacts);
                break;
            case 3:
                delect_contact(&contacts);
                break;
            case 4:
                find_contact(&contacts);
                break;
            case 5:
                modify_contact(&contacts);
                break;
            case 6:
                delete_all_contacts(&contacts);
                break;
            default:
                cout << "welcome to use next time!" << endl;
                return 0;
                break;
        }

    }
    return 0;
}
