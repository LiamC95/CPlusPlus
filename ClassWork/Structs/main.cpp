#include <functional>
#include<string>
#include <iostream>
#include<map>

using namespace std;
struct Entry{
    string name;
    string phone;
    string email;
};

void populate(map<string, Entry* > &map);
void retrieve(map<string, Entry* > &phonebook);

int main(){
    map<string , Entry*> phonebook;
    populate(phonebook);
    retrieve(phonebook);
    return 0;
}
void populate(map<string, Entry*> &map)
{
    string name [3]     = {"Liam Clarke", "Derek Flood", "Viv Mee"};
    string phone [3]    = {"0872846034", "0891324421", "0872846023"};
    string email [3]    = {"D001@gmail.com", "D002@gmail.com", "D001@gmail.com"};

    for(int i = 0; i <3; i++)
    {
        Entry *ent = new Entry();

        ent->name   = name[i];
        ent->phone  = phone[i];
        ent->email  = email[i];
        map[name[i]] = ent;
    }
}

/*
void print(map<string, Entry*> &phonebook)
{
    for()
}
*/

void question6()
{
    
}

void retrieve(map<string, Entry*> &phonebook)
{
    string name;
    cout << "please input the name you are searching for" << endl;
    getline(cin, name);

    if(phonebook.find(name) != phonebook.end())
    {
        string choice;
        cout << *phonebook[name] << endl;
        cout << "would you like to remove it:" << endl;
        cin >> choice;
        if (choice == "yes")
        {
            phonebook.erase(name);
        }
    }
    else
    {
        
            cout << "couldn't find the file mate" << endl;
        
    }
    


}